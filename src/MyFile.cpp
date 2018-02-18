//
// Created by birdi on 18.02.18.
//

#include "MyFile.h"


MyFile::MyFile (string filePath) {
    this->filePath = filePath;
    status = readFile();


    cout << ((filePath != "") ? "read" : "notread") << endl;
}

bool MyFile::readFile() {
    file.open(filePath);
    try {
        if (file.is_open()) {
            string line;
            int lineTag = 0;
            while (getline(file,line) && lineTag < 16) {
                rowList.push_back(line);
                rowMap.push_back(splitString(line));
                lineTag++;
            }
            return true;
        }
        return false;
    } catch (const exception e) {
        return false;
    }
}

map<string, string> MyFile::splitString(string input) {
    map<string, string> returnMap;
    string tempString = "";
    int keyTag = 0;
    for (auto sign : input) {
        if (sign != delimiter) {
            tempString += sign;
        } else {
            returnMap[key[keyTag]] = tempString;
            keyTag++;
            if (keyTag == 3) {
                keyTag = 0;
            }
            tempString = "";
        }
    }
    return returnMap;
};
