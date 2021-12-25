/*
** EPITECH PROJECT, 2021
** Task0? - my_strlowcase.c
** File description:
** abc
*/

#include <stdlib.h>

#include "../../../include/my_lib.h"

char *my_strlowcase(char *str)
{
    int i = 0;
    int list_length = my_strlen(str);
    char *dest;
    dest = malloc(sizeof(char) * (list_length + 1));

    for (; str[i] != '\0'; i++) {
        if (str[i] > 64 && str[i] < 91) {
            dest[i] = str[i] - 32;
        } else {
            dest[i] = str[i];
        }
    }
    return dest;
}
