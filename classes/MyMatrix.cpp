//
// Created by birdi on 04.12.17.
//

#include "MyMatrix.h"

MyMatrix::MyMatrix() {
    matrix = {{0}};
    if(!MyMatrix::init()) {
        cout << "matrix is invalid" << endl;
        valid = false;
    } else {
        valid = true;
    }
}

MyMatrix::MyMatrix(vector<vector<float>> inputMatrix) {
    matrix = inputMatrix;
    if(!MyMatrix::init()) {
        cout << "matrix is invalid" << endl;
        valid = false;
    } else {
        valid = true;
    }
}

MyMatrix::~MyMatrix() {
    matrix = {{0}};
}

bool MyMatrix::init() {
    xSize = matrix[0].size();
    ySize = matrix.size();

    if (verify(matrix)) {
        return true;
    } else {
        return false;
    }

}

bool MyMatrix::verify(vector<vector<float>> input) {
    int xAxisTag, size = 0;
    for(xAxisTag = 0; xAxisTag < input.size(); xAxisTag++) {
        size += input[xAxisTag].size();
        if ((size/(xAxisTag + 1)) != input[xAxisTag].size()) {
            return false;
        }
    }
    return true;
}

void MyMatrix::print(string input) {
    if(valid) {
        cout << input << ": " << endl;
        for (xAxisTag = 0;
             xAxisTag < matrix.size();
             xAxisTag++) {
            for (yAxisTag = 0;
                 yAxisTag < matrix[xAxisTag].size();
                 yAxisTag++) {
                cout << matrix[xAxisTag][yAxisTag] << " ";
            }
            cout << endl;
        }
    }
}

vector<vector<float>> MyMatrix::transpose() {
    if(valid){
        vector<vector<float>> tempMatrix
                (ySize, vector<float>(xSize));
        for (xAxisTag = 0; xAxisTag < xSize; xAxisTag++) {
            vector<float> tempVector;
            for (yAxisTag = 0; yAxisTag < ySize; yAxisTag++) {
                tempMatrix[yAxisTag][xAxisTag] =
                  matrix[xAxisTag][yAxisTag];
            }
        }
        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<float>> MyMatrix::add(MyMatrix input) {
    if(valid && verify(input.matrix)){
        vector<vector<float>> tempMatrix
                (ySize, vector<float>(xSize));
        for(xAxisTag = 0; xAxisTag < xSize; xAxisTag++) {
            for(yAxisTag = 0; yAxisTag < ySize; yAxisTag++) {
                tempMatrix[xAxisTag][yAxisTag] =
                    matrix[xAxisTag][yAxisTag] +
                    input.matrix[xAxisTag][yAxisTag];
            }
        }
        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<float>> MyMatrix::skalarMulti(float skalar) {
    if(valid) {
        vector<vector<float>> tempMatrix
            (ySize, vector<float>(xSize));
        for(xAxisTag = 0; xAxisTag < xSize; xAxisTag++) {
            for(yAxisTag = 0; yAxisTag < ySize; yAxisTag++) {
                tempMatrix[xAxisTag][yAxisTag] =
                        matrix[xAxisTag][yAxisTag] *
                        skalar;
            }
        }
        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<float>> MyMatrix::multi(MyMatrix input) {
    if (valid && verify(input.matrix)) {
        int xMin, yMin,
            xTempTag, yTempTag,
            xMulTag, yMulTag;
        xMin = min(xSize, input.xSize);
        yMin = max(ySize, input.ySize);
        vector<vector<float>> tempMatrix
            (yMin, vector<float>(xMin));
        for (yTempTag = 0;
             yTempTag < xMin;
             yTempTag++) {
            for (xTempTag = 0;
                 xTempTag < yMin;
                 xTempTag++) {
                for(xMulTag = 0;
                    xMulTag < xSize;
                    xMulTag++) {
                    tempMatrix[xTempTag][yTempTag] +=
                        matrix[xTempTag][xMulTag] *
                        input.matrix[xMulTag][yTempTag];
                }
            }
        }
        cout << "fine" << endl;
        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<float>> MyMatrix::elementMulit(MyMatrix input) {
    if(valid && verify(input.matrix)){
        vector<vector<float>> tempMatrix
                (ySize, vector<float>(xSize));
        for(xAxisTag = 0; xAxisTag < xSize; xAxisTag++) {
            for(yAxisTag = 0; yAxisTag < ySize; yAxisTag++) {
                tempMatrix[xAxisTag][yAxisTag] =
                        matrix[xAxisTag][yAxisTag] *
                        input.matrix[xAxisTag][yAxisTag];
            }
        }
        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<float>> MyMatrix::kroneckerMulti(MyMatrix input) {
    if(valid && verify(input.matrix)){
        int xTempSize = xSize + input.xSize;
        int yTempSize = ySize * input.ySize;
        vector<vector<float>> tempMatrix
                (yTempSize, vector<float>(xTempSize));
        int matrixAElements = xSize * ySize;
        int matrixBElements = input.xSize * input.ySize;
        int xTempTag = 0, yTempTag = 0;
        for(yAxisTag = 0; yAxisTag < ySize; yAxisTag++) {
            for(xAxisTag = 0; xAxisTag < xSize; xAxisTag++) {
                int count = 0;
                for(xTempTag = 0; xTempTag < input.xSize; xTempTag++) {
                    for(yTempTag = 0; yTempTag < input.ySize; yTempTag++) {
                        int y = count;
                        int x = xAxisTag;
                        int matrixValue = matrix[xAxisTag][yAxisTag];
                        int inputValue = input.matrix[xTempTag][yTempTag];
                        int resultValue = matrixValue*inputValue;

                        tempMatrix [xAxisTag][count] =
                            matrix[xAxisTag][yAxisTag] *
                            input.matrix[xTempTag][yTempTag];
                        count++;



                        /*tempMatrix
                            [xAxisTag + xTempTag]
                            [yAxisTag + yTempTag] =
                                matrix[xAxisTag][yAxisTag] *
                                input.matrix[xTempTag][yTempTag];*/
                    }
                }
            }
        }

        return tempMatrix;
    } else {
        return {{0}};
    }
}