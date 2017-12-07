#include <iostream>
#include "classes/MyFile.h"
#include "classes/MyMatrix.h"

int main() {

    string fileName = "cvNoMoving";
    MyFile file(fileName);
    cout << 7/8 << endl;
    cout << 4/4 << endl;



    MyMatrix matrixA({
        {10,3},
        {4,5}
    });
    MyMatrix matrixB({
        {6,8,2},
        {3,1,10}
    });

    MyMatrix matrixC = matrixA.horizontalMatrixConcatenation(matrixB);

    matrixC.print("matrixC");
    return 0;
}