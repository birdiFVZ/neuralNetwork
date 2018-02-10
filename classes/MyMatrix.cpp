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

MyMatrix::MyMatrix(int x, int y){
    vector<vector<float>> inputMatrix(x, vector<float>(y));
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
        int xTempSize = xSize * input.xSize;
        int yTempSize = ySize * input.ySize;
        vector<vector<float>> tempMatrix
                (yTempSize, vector<float>(xTempSize));
        int xTempTag = 0, yTempTag = 0, ycount = 0;
        for(yTempTag = 0, yAxisTag = 0; yTempTag < yTempSize; yTempTag++, yAxisTag++) {
            if (yAxisTag == ySize) {
                yAxisTag = 0;
            }
            for (xTempTag = 0, xAxisTag = 0; xTempTag < xTempSize; xTempTag++, xAxisTag++) {
                if (xAxisTag == xSize) {
                    xAxisTag = 0;
                }
                tempMatrix[yTempTag][xTempTag] =
                        input.matrix
                            [yTempTag % input.ySize]
                            [xTempTag % input.xSize] *
                        matrix
                            [(yTempTag - ycount % input.ySize) / input.ySize]
                            [(xTempTag - xTempTag % input.xSize) / input.xSize];
            }
            ycount++;
        }
        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<float>> MyMatrix::horizontalConcat(MyMatrix input) {
    if (valid && verify(input.matrix) && (ySize == input.ySize)) {
        int xTempSize = xSize + input.xSize;
        int yTempSize = ySize;
        vector<vector<float>> tempMatrix
                (yTempSize, vector<float>(xTempSize));
        for(yAxisTag = 0; yAxisTag < yTempSize; yAxisTag++) {
            for(xAxisTag = 0; xAxisTag < xTempSize; xAxisTag++) {
                int value = yAxisTag + xAxisTag;
                if (xAxisTag < xSize) {
                    value = matrix[yAxisTag][xAxisTag];
                } else {
                    value = input.matrix[yAxisTag][xAxisTag - xSize];
                }
                tempMatrix[yAxisTag][xAxisTag] = value;
            }
        }

        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<float>> toClass(MyMatrix input) {
    int count = 0;
    if(input.valid) {
        int yAxisTag, xAxisTag, value;
        vector<vector<float>> tempMatrix
                (input.ySize, vector<float>(1));
        for(yAxisTag = 0; yAxisTag < input.ySize; yAxisTag++) {
            value = 0;
            for(xAxisTag = 0; xAxisTag < input.xSize; xAxisTag++) {
                if(input.matrix[yAxisTag][xAxisTag] > 0) {
                    value = xAxisTag + 1;
                    count++;
                }
            }
            tempMatrix[yAxisTag][0] = value;
            count = 0;
        }
        if (count > 1) {
            cout << "error" << endl;
            return {{0}};
        }
        return tempMatrix;
    } else {
        cout << "invalid" << endl;
        return {{0}};
    }
}

vector<vector<float>> toMatrix(MyMatrix input) {
    int xAxisTag, yAxisTag, max = 0;
    for (yAxisTag = 0; yAxisTag < input.ySize; yAxisTag++) {
        if (max < input.matrix[yAxisTag][0]) {
            max = input.matrix[yAxisTag][0];
        }
    }
    vector<vector<float>> tempMatrix
            (input.ySize, vector<float>(max));
    for (yAxisTag = 0; yAxisTag < input.ySize; yAxisTag++) {
        for(xAxisTag = 0; xAxisTag < max; xAxisTag++) {
            if ((input.matrix[yAxisTag][0] - 1) == xAxisTag) {
                tempMatrix[yAxisTag][xAxisTag] = 1;
            }
        }
    }
    return tempMatrix;
}

vector<vector<float>> MyMatrix::activation() {
    vector<vector<float>> tempMatrix(ySize, vector<float>(xSize));
    for (yAxisTag = 0; yAxisTag < ySize; yAxisTag++) {
        for (xAxisTag = 0; xAxisTag < xSize; xAxisTag++) {
            cout << matrix[yAxisTag][xAxisTag] << endl;
        }
    }
}

float activationFunction(float input) {
    return (tanh(input) + 1) / 2;
}
float derivationFunction(float input) {
    return (1- pow(tanh(input), 2)) / 2;
}
