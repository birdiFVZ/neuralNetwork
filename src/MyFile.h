//
// Created by birdi on 04.12.17.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "MyBodyData.h"


using namespace std;

#ifndef NEURALNETWORK_MYFILE_H
#define NEURALNETWORK_MYFILE_H

/**
 *
 */
class MyFile {
public:
    vector<MyBodyData> data;
    MyFile(string input);
    string path;
    int count;
private:
    vector<string> splitString(string, char);
    double stringTodouble(string);
    string fileName;
    void initDataArray();
    bool loadFile();
    int readData();
    void closeFile();
    string directory =
        "/home/birdi/CLionProjects/neuralNetwork/data";
    ifstream file;
};


#endif //NEURALNETWORK_MYFILE_H
