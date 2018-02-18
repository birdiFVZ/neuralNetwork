//
// Created by birdi on 18.02.18.
//

#ifndef NEURALNETWORK_MYFILE_H
#define NEURALNETWORK_MYFILE_H

#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include <map>

using namespace std;

class MyFile {
public:
    MyFile(string);
    bool status;
    list<string> rowList;
    list<map<string, string>> rowMap;
private:
    char delimiter = ';';
    string key[3] = {"name", "value", "class"};
    string filePath;
    ifstream file;


    map<string, string> splitString(string);
    bool readFile();
};


#endif //NEURALNETWORK_MYFILE_H
