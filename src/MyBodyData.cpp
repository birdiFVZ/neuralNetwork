//
// Created by birdi on 04.12.17.
//

#include "MyBodyData.h"

MyBodyData::MyBodyData(MyFile inputFile) {
    init();
    for (auto row : inputFile.rowMap) {
        cout << row["value"] << endl;
    }
}

bool MyBodyData::init() {
    forearmLeft.name = "forearmLeft";
    forearmLeft.value = -1;
    upperarmLeft.name = "upperarmLeft";
    upperarmLeft.value = -1;
    shoulderHalfLeft.name = "shoulderHalfLeft";
    shoulderHalfLeft.value = -1;
    neck.name = "neck";
    neck.value = -1;
    shoulderHalfRight.name = "shoulderHalfRight";
    shoulderHalfRight.value = -1;
    upperarmRight.name = "upperarmRight";
    upperarmRight.value = -1;
    forearmRight.name = "forearmRight";
    forearmRight.value = -1;
    shoulder.name = "shoulder";
    shoulder.value = -1;
    upperBody.name = "upperBody";
    upperBody.value = -1;
    hip.name = "hip";
    hip.value = -1;
    lowerBody.name = "lowerBody";
    lowerBody.value = -1;
    body.name = "body";
    body.value = -1;
    lowerLegLeft.name = "lowerLegLeft";
    lowerLegLeft.value = -1;
    upperLegLeft.name = "upperLegLeft";
    upperLegLeft.value = -1;
    upperLegRight.name = "upperLegRight";
    upperLegRight.value = -1;
    lowerLegRight.name = "lowerLegRight";
    lowerLegRight.value = -1;
}