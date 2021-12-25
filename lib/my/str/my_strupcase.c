/*
** EPITECH PROJECT, 2021
** Task0? - my_strupcase.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

char *my_strupcase(char *str)
{
    int i = 0;
    char *dest;
    for (; str[i] != '\0'; i++) {
        if (str[i] > '`' && str[i] < '{') {
            dest[i] = str[i] - 'Z';
        } else {
            dest[i] = str[i];
        }
    }
}
