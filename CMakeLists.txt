cmake_minimum_required(VERSION 3.8)
project(neuralNetwork)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp source/MyFile.cpp source/MyFile.h source/MyBodyData.cpp source/MyBodyData.h source/MyMatrix.cpp source/MyMatrix.h source/MyNetwork.cpp source/MyNetwork.h source/functions.cpp source/functions.h)
add_executable(neuralNetwork ${SOURCE_FILES})