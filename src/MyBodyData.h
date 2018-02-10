//
// Created by birdi on 04.12.17.
//

#include <iostream>
#include <vector>

#ifndef NEURALNETWORK_BODYDATA_H
#define NEURALNETWORK_BODYDATA_H

using namespace std;

struct dataPoint{
    string name;
    double value;
};

class MyBodyData {
public:
    MyBodyData();
    dataPoint forearmLeft;
    dataPoint upperarmLeft;
    dataPoint shoulderHalfLeft;
    dataPoint neck;
    dataPoint shoulderHalfRight;
    dataPoint upperarmRight;
    dataPoint forearmRight;
    dataPoint shoulder;
    dataPoint upperBody;
    dataPoint hip;
    dataPoint lowerBody;
    dataPoint body;
    dataPoint lowerLegLeft;
    dataPoint upperLegLeft;
    dataPoint upperLegRight;
    dataPoint lowerLegRight;
};


#endif //NEURALNETWORK_BODYDATA_H
