cmake_minimum_required(VERSION 3.8)
project(neuralNetwork)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp classes/MyFile.cpp classes/MyFile.h classes/MyBodyData.cpp classes/MyBodyData.h classes/MyMatrix.cpp classes/MyMatrix.h)
add_executable(neuralNetwork ${SOURCE_FILES})