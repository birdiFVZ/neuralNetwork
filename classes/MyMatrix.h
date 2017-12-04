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
    MyMatrix(vector<vector<float>>);
    vector<vector<float>> matrix;
    void print();
    vector<vector<float>> transpose();

private:

};


#endif //NEURALNETWORK_MYMATRIX_H
