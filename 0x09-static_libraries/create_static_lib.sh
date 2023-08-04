#!/bin/bash

#creates object file for all the files with .c extention
gcc -c *.c

#creates a library archive
ar rc liball.a *.o

#generates symboolic index
ranlib liball.a

