##
## EPITECH PROJECT, 2021
## my_screensaver - comp_that.sh
## File description:
## abc
##

make re
gcc sleep.c ../my/libmy.a -lcsfml-system -L ./ -lmymaths -o sleep.out
./sleep.out 1