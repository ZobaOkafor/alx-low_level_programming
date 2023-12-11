#!/bin/bash
gcc -shared -o libhack101.so -fPIC hack101.c
export LD_PRELOAD=./libhack101.so:$LD_LIBRARY_PATH
