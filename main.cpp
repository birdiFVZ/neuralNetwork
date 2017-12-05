#include <iostream>
#include "classes/MyFile.h"
#include "classes/MyMatrix.h"

int main() {

    string fileName = "cvNoMoving";
    MyFile file(fileName);


    MyMatrix matrixA({
        {1,2},
        {3,4},
        {5,6}
    });
    MyMatrix matrixB({
        {7,8},
        {9,10}
    });

    MyMatrix matrixC = matrixA.kroneckerMulti(matrixB);

    matrixC.print("matrixC");
    return 0;
}