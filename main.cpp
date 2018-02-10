#include <iostream>
#include "src/MyFile.h"
#include "src/MyMatrix.h"
#include "src/functions.h"

int main() {

    //string fileName = "cvNoMoving";
    //MyFile file(fileName);


    MyMatrix matrixB({
         {0,1,0,0},
         {0,0,0,1}
    });

    matrixB.print();
    return 0;
}