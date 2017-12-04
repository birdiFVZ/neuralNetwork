//
// Created by birdi on 04.12.17.
//

#include "MyMatrix.h"



MyMatrix::MyMatrix(vector<vector<float>> inputMatrix) {
    MyMatrix::matrix = inputMatrix;
}

void MyMatrix::print() {
    int xAxisTag;
    int yAxisTag;
    cout << "inputMatrix: " << endl;
    for (xAxisTag = 0;
         xAxisTag < MyMatrix::matrix.size();
         xAxisTag++) {
        for (yAxisTag = 0;
             yAxisTag < MyMatrix::matrix[xAxisTag].size();
             yAxisTag++) {
            cout << MyMatrix::matrix[xAxisTag][yAxisTag] << " ";
        }
        cout << endl;
    }
}

vector<vector<float>> MyMatrix::transpose() {
    int xAxisTag;
    int yAxisTag;
    vector<vector<float>> transposedMatrix;
    for (xAxisTag = 0;
         xAxisTag < MyMatrix::matrix.size();
         xAxisTag++) {
            for (yAxisTag = 0;
                 yAxisTag < MyMatrix::matrix[xAxisTag].size();
                 yAxisTag++) {
                transposedMatrix[yAxisTag][xAxisTag] =
                    MyMatrix::matrix[xAxisTag][yAxisTag];
            }
    }
    return transposedMatrix;
}