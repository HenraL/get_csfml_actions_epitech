/*
** EPITECH PROJECT, 2021
** Task0? - my_strcmp.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

int my_strcmp(char const *s1, char const *s2)
{
    int	i = 0;
    for (;(s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'); i++) {
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 0;
    } else {
        return (s1[i] - s2[i]);
    }
}
