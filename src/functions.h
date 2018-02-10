//
// Created by birdi on 10.02.18.
//

#ifndef NEURALNETWORK_FUNCITONS_H
#define NEURALNETWORK_FUNCITONS_H

#include "MyMatrix.h"

vector<vector<double>> toClass(MyMatrix);
vector<vector<double>> toMatrix(MyMatrix);

template<typename T>
    T myRandom(T min, T max) {
    T random = static_cast<T>(rand()) /
            static_cast<T>(RAND_MAX);
    T difference = max - min;
    T value = random * difference;
    return min + value;
}


#endif //NEURALNETWORK_FUNCITONS_H
