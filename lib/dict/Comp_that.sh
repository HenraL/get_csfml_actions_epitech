#!/bin/bash
##
## EPITECH PROJECT, 2021
## my_screensaver - Comp_that.sh
## File description:
## abc
##


NAME=dict.out
SRC=test.c
LIB=.
LIB_NAME=mydict

echo ""
echo $NAME
echo $SRC
echo $LIB
echo $LIB_NAME
echo ""
echo "making the libmy lib"
echo 'make'
make
echo 'gcc'
ls
gcc $SRC -o $NAME -L$LIB -l$LIB_NAME
echo "running $NAME"
./$NAME
echo -e '\nend'