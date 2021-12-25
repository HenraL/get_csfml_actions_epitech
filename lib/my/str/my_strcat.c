/*
** EPITECH PROJECT, 2021
** Task0? - my_strcat.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;

    for (; src[i] != '\0'; i++) {
        dest[len + i] = src[i++];
    }
    dest[len + i] = '\0';
    return dest;
}
