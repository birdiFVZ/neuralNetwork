//
// Created by birdi on 04.12.17.
//

#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

#ifndef NEURALNETWORK_MYMATRIX_H
#define NEURALNETWORK_MYMATRIX_H


class MyMatrix {
public:
    MyMatrix();
    MyMatrix(vector<vector<float>>);
    MyMatrix(int, int);
    ~MyMatrix();
    vector<vector<float>> matrix;
    int xSize, ySize;

    vector<vector<float>> transpose();
    vector<vector<float>> add(MyMatrix);
    vector<vector<float>> skalarMulti(float);
    vector<vector<float>> elementMulit(MyMatrix);
    vector<vector<float>> kroneckerMulti(MyMatrix);
    vector<vector<float>> multi(MyMatrix);
    vector<vector<float>> horizontalConcat(MyMatrix);

    vector<vector<float>> activation();
    vector<vector<float>> derivation();

    void print(string = "inputMatrix");
    bool valid;
private:
    bool init();
    bool verify(vector<vector<float>>);
    int xAxisTag, yAxisTag;
    virtual float activationFunction(float) = 0;
    virtual float derivationFunction(float) = 0;

};

//vector<vector<float>> toClass(MyMatrix);
//vector<vector<float>> toMatrix(MyMatrix);


#endif //NEURALNETWORK_MYMATRIX_H
