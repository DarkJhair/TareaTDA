cmake_minimum_required(VERSION 3.8)
project(untitle)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Nodo.cpp Nodo.h ListaTDA.cpp ListaTDA.h)
add_executable(untitle ${SOURCE_FILES})