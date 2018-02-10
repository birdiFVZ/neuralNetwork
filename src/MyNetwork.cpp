//
// Created by birdi on 10.02.18.
//

#include "MyNetwork.h"

vector<vector<float>> MyNetwork::activation(MyMatrix input) {
    vector<vector<float>> tempMatrix(input.ySize, vector<float>(input.xSize));
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

vector<vector<float>> MyNetwork::feedForward() {

}


float MyNetwork::activationFunction(float input) {
    return (tanh(input) + 1) / 2;
}

float MyNetwork::derivationFunction(float input) {
    return (1- pow(tanh(input), 2)) / 2;
}