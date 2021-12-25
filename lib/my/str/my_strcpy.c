/*
** EPITECH PROJECT, 2021
** Task01 - my_strcpy.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    for (; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return dest;
}
