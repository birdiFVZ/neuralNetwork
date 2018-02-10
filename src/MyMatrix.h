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
    vector<vector<float>> horizontalMatrixConcatenation(MyMatrix);
    vector<vector<float>> multi(MyMatrix);
    vector<vector<float>> horizontalConcat(MyMatrix);


    void print(string = "inputMatrix");
    bool valid;
private:
    bool init();
    bool verify(vector<vector<float>>);
    int xAxisTag, yAxisTag;
};




#endif //NEURALNETWORK_MYMATRIX_H