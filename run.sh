#! /bin/bash

g++ -c arrayListTypeImp.cpp
g++ -c orderedArrayListTypeImp.cpp
g++ test.cpp arrayListTypeImp.o orderedArrayListTypeImp.o
