#!/bin/bash

rm example.py example_wrap.cxx *.o *.so

swig3.0 -c++ -python example.i
g++ -fpic -c example.c example_wrap.cxx Word.cpp -I/usr/include/python2.7/
gcc -shared example_wrap.o Word.o -o _example.so -lstdc++
