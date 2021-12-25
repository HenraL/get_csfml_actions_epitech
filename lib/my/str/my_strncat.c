/*
** EPITECH PROJECT, 2021
** Task0? - my_strncat.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int length = my_strlen(dest);
    int i = 0;
    for (; src[i] != '\0' && i < nb; i++) {
        dest[length + i] = src[i];
    }
    dest[length + i] = '\0';
    return dest;
}
