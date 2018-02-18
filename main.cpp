#include <iostream>
#include "src/MyFile.h"
#include "src/MyMatrix.h"
#include "src/MyNetwork.h"
#include "src/functions.h"

#include <plplot/plplot.h>

int main() {

    //string fileName = "cvNoMoving";
    //MyFile file(fileName);
    
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

    return 0;
}