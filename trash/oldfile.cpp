//
// Created by birdi on 04.12.17.
//
/*
#include "oldfile.h"

using namespace std;

oldFile::oldFile() {};

oldFile::oldFile(string input) {

    oldFile::filePath = input;
    if (oldFile::loadFile()) {
      oldFile::readData();
    };
    oldFile::closeFile();
}



bool oldFile::loadFile() {
    oldFile::file.open(oldFile::filePath);
    if (oldFile::file.is_open()) {
        return true;
    } else {
        cout << "not possible to open: " << oldFile::filePath << endl;
        return false;
    }
}

int oldFile::readData() {
    string line;
    char delimiter = ';';
    int whileTag = 0;
    vector<vector<string>> lineData;
    MyBodyData tempData;

    while(getline(oldFile::file, line)) {
        lineData.push_back(oldFile::splitString(line, delimiter));
        string pointName =
                lineData[whileTag][0];
        if (pointName != "property") {
            double pointValue =
                    stringToDouble(lineData[whileTag][1]);
            if (lineData[whileTag][0] == "forearmLeft" &&
                tempData.forearmLeft.value != -1) {
                oldFile::data.push_back(tempData);
                MyBodyData tempData;
                tempData.forearmLeft.value = pointValue;
            } else {
                if (pointName == "forearmLeft") {
                    tempData.forearmLeft.value = pointValue;
                } else if (pointName == "upperarmLeft") {
                    tempData.upperarmLeft.value = pointValue;
                } else if (pointName == "shoulderHalfLeft") {
                    tempData.shoulderHalfLeft.value = pointValue;
                } else if (pointName == "neck") {
                    tempData.neck.value = pointValue;
                } else if (pointName == "shoulderHalfRight") {
                    tempData.shoulderHalfRight.value = pointValue;
                } else if (pointName == "upperarmRight") {
                    tempData.upperarmRight.value = pointValue;
                } else if (pointName == "forearmRight") {
                    tempData.forearmRight.value = pointValue;
                } else if (pointName == "shoulder") {
                    tempData.shoulder.value = pointValue;
                } else if (pointName == "upperBody") {
                    tempData.upperBody.value = pointValue;
                } else if (pointName == "hip") {
                    tempData.hip.value = pointValue;
                } else if (pointName == "lowerBody") {
                    tempData.lowerBody.value = pointValue;
                } else if (pointName == "body") {
                    tempData.body.value = pointValue;
                } else if (pointName == "lowerLegLeft") {
                    tempData.lowerLegLeft.value = pointValue;
                } else if (pointName == "upperLegLeft") {
                    tempData.upperLegLeft.value = pointValue;
                } else if (pointName == "upperLegRight") {
                    tempData.upperLegRight.value = pointValue;
                } else if (pointName == "lowerLegRight") {
                    tempData.lowerLegRight.value = pointValue;
                } else {
                    cout << "wrong input" << endl;
                    return -1;
                }
            }
        }
        whileTag++;
    }
    oldFile::count = whileTag;
}



void oldFile::closeFile() {
    if (oldFile::file.is_open()) {
        oldFile::file.close();
    }
}

vector<string> oldFile::splitString(
        std::string inputString,
        char delimiter
) {
    vector<string> returnVector;
    string tempString = "";
    for (
            int tag = 0;
            tag < inputString.length();
            tag ++
            ) {
        if (inputString[tag] == delimiter) {
            returnVector.push_back(tempString);
            tempString = "";
        } else {
            tempString += inputString[tag];
        }
    }
    return returnVector;
}

double oldFile::stringToDouble(std::string inputString) {
    int positionTag;
    for (positionTag = 0;
         inputString[positionTag];
         positionTag++) {
        if (inputString[positionTag] == ',') {
            inputString.replace(positionTag,1,".");
        }
    }
    return std::stof(inputString);
}*/