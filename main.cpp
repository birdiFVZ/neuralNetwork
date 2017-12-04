#include <iostream>
#include "classes/MyFile.h"
#include "classes/MyMatrix.h"

int main() {

    string fileName = "cvNoMoving";
    MyFile file(fileName);


    MyMatrix matrix({
        {1,2,3,4},
        {4,5,6,7}
    });
    matrix.print();


    return 0;
}