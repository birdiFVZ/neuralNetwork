//
// Created by birdi on 10.02.18.
//

#ifndef NEURALNETWORK_MYNETWORK_H
#define NEURALNETWORK_MYNETWORK_H

#include "MyMatrix.h"
#include "functions.h"

class MyNetwork {
public:
    bool init();
    bool set(string, MyMatrix);
    bool get(string);
private:
    MyMatrix input,
            output,
            targetOutput,
            weight,
            bias,
            biasTraining,
            biasValidation,
            biasTest,
            net,
            targetClass;

    double samples;
    double inputNeurons;
    double outputNeurons;
    double neurons;
    double errorAmount;
    double classMatches;
    double learningRate;


    vector<vector<double>> activation(MyMatrix input);
    vector<vector<double>> derivation();
    bool feedForward();
    bool backpropagation(double);
    bool evaluateError();
    bool train();
    double activationFunction(double);
    double derivationFunction(double);
    bool check();
};


#endif //NEURALNETWORK_MYNETWORK_H
