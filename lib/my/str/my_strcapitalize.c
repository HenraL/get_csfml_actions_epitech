/*
** EPITECH PROJECT, 2021
** Task0? - my_strcapitalize.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

char *my_strcapitalize(char *str)
{
    int i = 0;
    int list_length = my_strlen(str);
    char *dest;
    char *str2;
    str2 = my_strcpy(str2, str);

    for (; str[i] != '\0'; i++) {
        if (str[i] > 96 && str[i] < 123) {
            dest[i] = str2[i] + 32;
        } else {
            dest[i] = str2[i];
        }
    }
    return dest;
}
