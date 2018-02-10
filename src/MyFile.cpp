//
// Created by birdi on 04.12.17.
//

#include "MyFile.h"

using namespace std;

MyFile::MyFile(string input) {

    MyFile::fileName = input;
    if (MyFile::loadFile()) {
      MyFile::readData();
    };
    MyFile::closeFile();
}



bool MyFile::loadFile() {
    MyFile::path = MyFile::directory + "/" +
                        MyFile::fileName + ".csv";
    MyFile::file.open(MyFile::path);
    if (MyFile::file.is_open()) {
        return true;
    } else {
        cout << "not possible to open: " << MyFile::path << endl;
        return false;
    }
}

int MyFile::readData() {
    string line;
    char delimiter = ';';
    int whileTag = 0;
    vector<vector<string>> lineData;
    MyBodyData tempData;

    while(getline(MyFile::file, line)) {
        lineData.push_back(MyFile::splitString(line, delimiter));
        string pointName =
                lineData[whileTag][0];
        if (pointName != "property") {
            float pointValue =
                    stringToFloat(lineData[whileTag][1]);
            if (lineData[whileTag][0] == "forearmLeft" &&
                tempData.forearmLeft.value != -1) {
                MyFile::data.push_back(tempData);
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
    MyFile::count = whileTag;
}



void MyFile::closeFile() {
    if (MyFile::file.is_open()) {
        MyFile::file.close();
    }
}

vector<string> MyFile::splitString(
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

float MyFile::stringToFloat(std::string inputString) {
    int positionTag;
    for (positionTag = 0;
         inputString[positionTag];
         positionTag++) {
        if (inputString[positionTag] == ',') {
            inputString.replace(positionTag,1,".");
        }
    }
    return std::stof(inputString);
}