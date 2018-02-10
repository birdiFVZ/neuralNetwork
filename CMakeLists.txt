cmake_minimum_required(VERSION 3.8)
project(neuralNetwork)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/MyFile.cpp src/MyFile.h src/MyBodyData.cpp src/MyBodyData.h src/MyMatrix.cpp src/MyMatrix.h src/MyNetwork.cpp src/MyNetwork.h src/functions.cpp src/functions.h)
add_executable(neuralNetwork ${SOURCE_FILES})