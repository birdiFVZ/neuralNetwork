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
    MyMatrix(vector<vector<double>>);
    MyMatrix(int, int);
    //~MyMatrix();

    vector<vector<double>> matrix;
    int xSize, ySize;
    bool valid;

    vector<vector<double>> transpose();
    void print(string = "inputMatrix");
    bool containValues();
    bool fill(double);
    bool fillRandomize(double, double);
    bool square();

private:
    bool init();
    bool verify(vector<vector<double>>);
    int xAxisTag, yAxisTag;
};

bool sameSize(MyMatrix, MyMatrix);
vector<vector<double>> add(MyMatrix, MyMatrix);
vector<vector<double>> skalarMulti(MyMatrix, double);
vector<vector<double>> elementMulit(MyMatrix, MyMatrix);
vector<vector<double>> kroneckerMulti(MyMatrix, MyMatrix);
vector<vector<double>> multi(MyMatrix, MyMatrix);
vector<vector<double>> horizontalConcat(MyMatrix, MyMatrix);
vector<vector<double>> compare(MyMatrix, MyMatrix);

double operator==(MyMatrix, MyMatrix);
double operator!=(MyMatrix, MyMatrix);

#endif //NEURALNETWORK_MYMATRIX_H
