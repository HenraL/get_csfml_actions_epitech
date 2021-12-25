/*
** EPITECH PROJECT, 2021
** Task0? - my_str_isprintable.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

int my_str_isprintable(char const *str)
{
    int i = 0;
    char *str2;
    str2 = my_strcpy(str2, str);
    for (; str2[i] != '\0'; i++) {
        if (str2[i] < 32 || str2[i] == 127) {
            return 0;
        }
    }
    return 1;
}
