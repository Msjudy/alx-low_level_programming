#!bin/bash
gcc -c -fpic *.c
gcc -shared -o liball.so *.o
gcc -shared -o libdynamic.so *.o
