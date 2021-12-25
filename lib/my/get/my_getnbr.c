/*
** EPITECH PROJECT, 2021
** Task0? - my_getnbr.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

int my_getnbr(char const *str)
{
    int a = 1;
    char *tmp;
    tmp = my_strcpy(tmp, str);
    int nb_int = 0;
    for (; *str != '\0'; str++) {
        a *= 10;
    }

    a /= 10;
    str = tmp;
    for (; *str != '\0'; str++) {
        nb_int += (*str - '0') * a;
        a /= 10;
    }
    return nb_int;
}
