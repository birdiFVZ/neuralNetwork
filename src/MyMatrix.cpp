//
// Created by birdi on 04.12.17.
//

#include "MyMatrix.h"
#include "functions.h"

MyMatrix::MyMatrix() {
    matrix = {{0}};
    if(!MyMatrix::init()) {
        cout << "matrix is invalid" << endl;
        valid = false;
    } else {
        valid = true;
    }
}

MyMatrix::MyMatrix(vector<vector<double>> inputMatrix) {
    matrix = inputMatrix;
    if(!MyMatrix::init()) {
        cout << "matrix is invalid" << endl;
        valid = false;
    } else {
        valid = true;
    }
}

MyMatrix::MyMatrix(int x, int y){
    vector<vector<double>> inputMatrix(x, vector<double>(y));
    matrix = inputMatrix;
    if(!MyMatrix::init()) {
        cout << "matrix is invalid" << endl;
        valid = false;
    } else {
        valid = true;
    }
}

//MyMatrix::~MyMatrix() {

//}

bool MyMatrix::init() {
    xSize = matrix[0].size();
    ySize = matrix.size();

    if (verify(matrix)) {
        return true;
    } else {
        return false;
    }

}

bool MyMatrix::verify(vector<vector<double>> input) {
    int xAxisTag, size = 0;
    for(xAxisTag = 0; xAxisTag < input.size(); xAxisTag++) {
        size += input[xAxisTag].size();
        if ((size/(xAxisTag + 1)) != input[xAxisTag].size()) {
            return false;
        }
    }
    return true;
}

bool MyMatrix::containValues() {
    if (valid) {
        if (matrix.size() > 1 && matrix[0].size() > 1) {
            return true;
        }
    }
    return false;
}

void MyMatrix::print(string input) {
    if(valid) {
        cout << input << ": " << endl;
        for (auto yAxis : matrix) {
            for (auto xAxis : yAxis) {
                cout << xAxis << " ";
            }
            cout << endl;
        }
    }
}

vector<vector<double>> MyMatrix::transpose() {
    if(valid){
        vector<vector<double>> tempMatrix
                (xSize, vector<double>(ySize));
        for (yAxisTag = 0; yAxisTag < ySize; yAxisTag++) {
            for (xAxisTag = 0; xAxisTag < xSize; xAxisTag++) {
                tempMatrix[xAxisTag][yAxisTag] = matrix[yAxisTag][xAxisTag];
            }
        }
        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<double>> add(MyMatrix first, MyMatrix second) {
    if(sameSize(first, second)){
        vector<vector<double>> tempMatrix
                (first.ySize, vector<double>(first.xSize));
        for(int xAxisTag = 0; xAxisTag < first.xSize; xAxisTag++) {
            for(int yAxisTag = 0; yAxisTag < first.ySize; yAxisTag++) {
                tempMatrix[xAxisTag][yAxisTag] =
                    first.matrix[xAxisTag][yAxisTag] +
                    second.matrix[xAxisTag][yAxisTag];
            }
        }
        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<double>> skalarMulti(MyMatrix first,double skalar) {
    if(first.valid) {
        vector<vector<double>> tempMatrix
            (first.ySize, vector<double>(first.xSize));
        for(int xAxisTag = 0; xAxisTag < first.xSize; xAxisTag++) {
            for(int yAxisTag = 0; yAxisTag < first.ySize; yAxisTag++) {
                tempMatrix[xAxisTag][yAxisTag] =
                        first.matrix[xAxisTag][yAxisTag] *
                        skalar;
            }
        }
        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<double>> multi(MyMatrix first, MyMatrix second) {
    if (first.valid && second.valid) {
        int xMin, yMin,
            xTempTag, yTempTag,
            xMulTag, yMulTag;
        xMin = min(first.xSize, second.xSize);
        yMin = max(first.ySize, second.ySize);
        vector<vector<double>> tempMatrix
            (yMin, vector<double>(xMin));
        for (yTempTag = 0;
             yTempTag < xMin;
             yTempTag++) {
            for (xTempTag = 0;
                 xTempTag < yMin;
                 xTempTag++) {
                for(xMulTag = 0;
                    xMulTag < first.xSize;
                    xMulTag++) {
                    tempMatrix[xTempTag][yTempTag] +=
                        first.matrix[xTempTag][xMulTag] *
                        second.matrix[xMulTag][yTempTag];
                }
            }
        }
        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<double>> elementMulit(MyMatrix first, MyMatrix second) {
    if(sameSize(first, second)){
        vector<vector<double>> tempMatrix
                (first.ySize, vector<double>(first.xSize));
        for(int xAxisTag = 0; xAxisTag < first.xSize; xAxisTag++) {
            for(int yAxisTag = 0; yAxisTag < first.ySize; yAxisTag++) {
                tempMatrix[xAxisTag][yAxisTag] =
                        first.matrix[xAxisTag][yAxisTag] *
                        second.matrix[xAxisTag][yAxisTag];
            }
        }
        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<double>> kroneckerMulti(MyMatrix first, MyMatrix second) {
    if(first.valid && second.valid){
        int xTempSize = first.xSize * second.xSize;
        int yTempSize = first.ySize * second.ySize;
        vector<vector<double>> tempMatrix
                (yTempSize, vector<double>(xTempSize));
        int ycount = 0;
        for(int yTempTag = 0, yAxisTag = 0; yTempTag < yTempSize; yTempTag++, yAxisTag++) {
            if (yAxisTag == first.ySize) {
                yAxisTag = 0;
            }
            for (int xTempTag = 0, xAxisTag = 0; xTempTag < xTempSize; xTempTag++, xAxisTag++) {
                if (xAxisTag == first.xSize) {
                    xAxisTag = 0;
                }
                tempMatrix[yTempTag][xTempTag] =
                        first.matrix
                        [(yTempTag - ycount % second.ySize) / second.ySize]
                        [(xTempTag - xTempTag % second.xSize) / second.xSize] *
                        second.matrix
                            [yTempTag % second.ySize]
                            [xTempTag % second.xSize];
            }
            ycount++;
        }
        return tempMatrix;
    } else {
        return {{0}};
    }
}

vector<vector<double>> horizontalConcat(MyMatrix first, MyMatrix second) {
    if (first.valid && second.valid && (first.ySize == second.ySize)) {
        int xTempSize = first.xSize + second.xSize;
        int yTempSize = first.ySize;
        vector<vector<double>> tempMatrix
                (yTempSize, vector<double>(xTempSize));
        for(int yAxisTag = 0; yAxisTag < yTempSize; yAxisTag++) {
            for(int xAxisTag = 0; xAxisTag < xTempSize; xAxisTag++) {
                int value = yAxisTag + xAxisTag;
                if (xAxisTag < first.xSize) {
                    value = first.matrix[yAxisTag][xAxisTag];
                } else {
                    value = second.matrix[yAxisTag][xAxisTag - first.xSize];
                }
                tempMatrix[yAxisTag][xAxisTag] = value;
            }
        }
        return tempMatrix;
    } else {
        return {{0}};
    }
}

bool sameSize(MyMatrix first, MyMatrix second) {
    if (first.valid && second.valid &&
        first.xSize == second.xSize &&
        first.ySize == second.ySize) {
            return true;
    }
    return false;
}

bool MyMatrix::fill(double value) {
    for (yAxisTag = 0; yAxisTag < ySize; yAxisTag++) {
        for (xAxisTag = 0; xAxisTag < xSize; xAxisTag++) {
            matrix[yAxisTag][xAxisTag] = value;
        }
    }
    return true;
}

bool MyMatrix::fillRandomize(double min, double max) {
    for (yAxisTag = 0; yAxisTag < ySize; yAxisTag++) {
        for (xAxisTag = 0; xAxisTag < xSize; xAxisTag++) {
            matrix[yAxisTag][xAxisTag] = myRandom(min, max);
        }
    }
    return true;
}

bool MyMatrix::square() {
    for (yAxisTag = 0; yAxisTag < ySize; yAxisTag++) {
        for (xAxisTag = 0; xAxisTag < xSize; xAxisTag++) {
            matrix[yAxisTag][xAxisTag] =
                    pow(matrix[yAxisTag][xAxisTag], 2);
        }
    }
}

vector<vector<double>> compare(MyMatrix first, MyMatrix second) {
    if(sameSize(first, second)) {
        vector<vector<double>> tempMatrix
                (first.ySize, vector<double>(first.xSize));
        for (int yAxisTag = 0; yAxisTag < first.ySize; yAxisTag++) {
            for (int xAxisTag = 0; xAxisTag < first.xSize; xAxisTag++) {
                tempMatrix[yAxisTag][xAxisTag] =
                    first.matrix[yAxisTag][xAxisTag] !=
                    second.matrix[yAxisTag][xAxisTag];
            }
        }
        return tempMatrix;
    }
    return {{0}};
}

/**
 *
 * @param first
 * @param second
 * @return the amount of matching elements
 */
double operator==(MyMatrix first, MyMatrix second) {
    double count = 0;
    if (sameSize(first, second)) {
        for (int yAxisTag = 0; yAxisTag < first.ySize; yAxisTag++) {
            for (int xAxisTag = 0; xAxisTag < first.xSize; xAxisTag++) {
                if (first.matrix[yAxisTag][xAxisTag] ==
                    second.matrix[yAxisTag][xAxisTag]) {
                    count++;
                }
            }
        }
        return count;
    }
    return 0;
}

/**
 *
 * @param first
 * @param second
 * @return the amount of not matching elements
 */
double operator!=(MyMatrix first, MyMatrix second) {
    double count = 0;
    if (sameSize(first, second)) {
        for (int yAxisTag = 0; yAxisTag < first.ySize; yAxisTag++) {
            for (int xAxisTag = 0; xAxisTag < first.xSize; xAxisTag++) {
                if (first.matrix[yAxisTag][xAxisTag] !=
                    second.matrix[yAxisTag][xAxisTag]) {
                    count++;
                }
            }
        }
        return count;
    }
    return 0;
}


