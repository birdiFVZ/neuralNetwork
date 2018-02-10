#include <iostream>
#include "classes/MyFile.h"
#include "classes/MyMatrix.h"

int main() {

    //string fileName = "cvNoMoving";
    //MyFile file(fileName);

    MyMatrix matrixA(2,2);
    MyMatrix matrixB({
         {0,1,0,0},
         {0,0,0,1}
    });

    matrixB = matrixB.activation();
    matrixB.print();
    return 0;
}