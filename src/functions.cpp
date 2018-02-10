//
// Created by birdi on 10.02.18.
//

#include "functions.h"


vector<vector<double>> toClass(MyMatrix input) {
    int count = 0;
    if(input.valid) {
        int yAxisTag, xAxisTag, value;
        vector<vector<double>> tempMatrix
                (input.ySize, vector<double>(1));
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

vector<vector<double>> toMatrix(MyMatrix input) {
    int xAxisTag, yAxisTag, max = 0;
    for (yAxisTag = 0; yAxisTag < input.ySize; yAxisTag++) {
        if (max < input.matrix[yAxisTag][0]) {
            max = input.matrix[yAxisTag][0];
        }

    }
    vector<vector<double>> tempMatrix
            (input.ySize, vector<double>(max));
    for (yAxisTag = 0; yAxisTag < input.ySize; yAxisTag++) {
        for(xAxisTag = 0; xAxisTag < max; xAxisTag++) {
            if ((input.matrix[yAxisTag][0] - 1) == xAxisTag) {
                tempMatrix[yAxisTag][xAxisTag] = 1;
            }
        }
    }
    return tempMatrix;
}

