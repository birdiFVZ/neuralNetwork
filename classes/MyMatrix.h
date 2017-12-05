//
// Created by birdi on 04.12.17.
//

#include <vector>
#include <iostream>

using namespace std;

#ifndef NEURALNETWORK_MYMATRIX_H
#define NEURALNETWORK_MYMATRIX_H



class MyMatrix {
public:
    MyMatrix();
    MyMatrix(vector<vector<float>>);
    ~MyMatrix();
    vector<vector<float>> matrix;
    void print(string = "inputMatrix");
    vector<vector<float>> transpose();
    vector<vector<float>> add(MyMatrix);
    vector<vector<float>> skalarMulti(float);
    vector<vector<float>> elementMulit(MyMatrix);
    vector<vector<float>> kroneckerMulti(MyMatrix);
    vector<vector<float>> multi(MyMatrix);
    int xSize, ySize;
private:
    bool init();
    bool valid;
    bool verify(vector<vector<float>>);
    int xAxisTag, yAxisTag;


};


#endif //NEURALNETWORK_MYMATRIX_H
