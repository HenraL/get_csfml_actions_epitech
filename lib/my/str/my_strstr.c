/*
** EPITECH PROJECT, 2021
** Task05 - my_strstr.c
** File description:
** abc
*/

#include <stdlib.h>
#include "../../../include/my_lib.h"

char *my_strstr(char *str, char const *to_find)
{
    char *result;
    result = malloc(sizeof(char) * (my_strlen(to_find) + 1));
    result[0] = ins(str, to_find);
    result[1] = '\0';
    return result;
}
