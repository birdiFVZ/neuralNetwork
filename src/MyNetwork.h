//
// Created by birdi on 10.02.18.
//

#ifndef NEURALNETWORK_MYNETWORK_H
#define NEURALNETWORK_MYNETWORK_H

#include "MyMatrix.h"

class MyNetwork {
public:

private:
    MyMatrix inputs;
    MyMatrix outputs;
    MyMatrix weights;
    MyMatrix bias;

    vector<vector<float>> activation(MyMatrix input);
    vector<vector<float>> derivation();
    vector<vector<float>> feedForward();
    float activationFunction(float);
    float derivationFunction(float);
};


#endif //NEURALNETWORK_MYNETWORK_H
