#include <iostream>

#include "src/MyMatrix.h"
#include "src/MyNetwork.h"
#include "src/functions.h"
#include "src/MyFile.h"
#include "src/MyBodyData.h"

using namespace std;

int main() {

    string trainingPath = "/home/birdi/Schreibtisch/neuralNetwork07022018/data/training.csv";
    MyFile trainingFile(trainingPath);
    //MyBodyData trainingData(training);


    /*
    MyMatrix weight(4,4);
    MyMatrix biasTraining(10,1);
    MyMatrix biasValidation(10,1);
    MyMatrix biasTest(10,1);

    biasTraining.fill(1);
    biasValidation.fill(1);
    biasTest.fill(1);
    weight.fillRandomize(0,0.5);

    MyNetwork network;
    network.set("weight", weight);
    network.set("biasTrainig", biasTraining);
    network.set("biasValidation", biasValidation);
    network.set("biasTest", biasTest);

    int whileCount = 0;
    while(whileCount < 500) {



        whileCount++;
    }
*/
    return 0;
}