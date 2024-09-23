#!/bin/bash

gcc -fPIC -c *.c
gcc -shared *.o -0 liball.so
