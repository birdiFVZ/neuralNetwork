//
// Created by birdi on 10.02.18.
//

#include "MyNetwork.h"

bool MyNetwork::set(string layer,MyMatrix input) {
    if (layer == "input") {
        this->input = input.matrix;
    } else if (layer == "output") {
        output = input.matrix;
    } else if (layer == "weight") {
        weight = input.matrix;
    } else if (layer == "bias") {
        bias = input.matrix;
    }  else if (layer == "biasTraining") {
        biasTraining = input.matrix;
    }  else if (layer == "biasValidation") {
        biasValidation = input.matrix;
    }  else if (layer == "biasTest") {
        biasTest = input.matrix;
    } else if(layer == "targetOutput") {
        targetOutput = input.matrix;
    } else if (layer == "targetClass") {
        targetClass = input.matrix;
    } else {
        cout << "set: unknown layer " << layer << endl;
        return false;
    }
    return true;
}

bool MyNetwork::get(string layer) {
    if (layer == "input") {
        input.print();
    } else if (layer == "output") {
        output.print();
    } else if (layer == "weight") {
        weight.print();
    } else if (layer == "bias") {
        bias.print();
    } else if (layer == "targetOutput") {
        targetOutput.print();
    } else if (layer == "targetClass") {
        targetClass.print();
    } else {
        cout << "get: unknown layer " << layer << endl;
        return false;
    }
    return true;
}

vector<vector<double>> MyNetwork::activation(MyMatrix input) {
    vector<vector<double>> tempMatrix(input.ySize, vector<double>(input.xSize));
    for (int yAxisTag = 0; yAxisTag < input.ySize; yAxisTag++) {
        for (int xAxisTag = 0; xAxisTag < input.xSize; xAxisTag++) {
            tempMatrix[yAxisTag][xAxisTag] =
                    activationFunction(
                            input.matrix[yAxisTag][xAxisTag]
                    );
        }
    }
    return tempMatrix;
}


bool MyNetwork::feedForward() {
    if (check()) {
        net = multi(weight, horizontalConcat(input, bias));
        output = activation(net);
        return true;
    }
    return false;
}

bool MyNetwork::backpropagation(double learningRate) {
    this->learningRate = learningRate;
    //weight = skalarMulti(weight, this->learningRate);
    //feedForward();
}

bool MyNetwork::evaluateError() {
    if (check()) {
        errorAmount = 0;
        if(sameSize(output, targetOutput)){
            for (int yAxisTag = 0; yAxisTag < output.ySize; yAxisTag++) {
                for (int xAxisTag = 0; xAxisTag < output.xSize; xAxisTag++) {
                    errorAmount += pow(
                            (output.matrix[yAxisTag][xAxisTag] -
                             targetOutput.matrix[yAxisTag][xAxisTag]), 2) /
                                   (samples * outputNeurons);
                }
            }
        }
        MyMatrix classes = toClass(output);
        classMatches = (classes != targetClass) / samples;
        return true;
    }
    return false;
}

bool MyNetwork::train() {

}

bool MyNetwork::init() {

}

bool MyNetwork::check() {
    if (input.containValues() &&
        output.containValues() &&
        weight.containValues() &&
        bias.containValues() &&
        targetClass.containValues() &&
        targetOutput.containValues() &&
        net.containValues() &&
        samples > 0 &&
        inputNeurons > 0 &&
        outputNeurons > 0 &&
        neurons > 0
            ) {
        return true;
    }
    return false;
}

double MyNetwork::activationFunction(double input) {
    return (tanh(input) + 1) / 2;
}

double MyNetwork::derivationFunction(double input) {
    return (1- pow(tanh(input), 2)) / 2;
}