/*
** EPITECH PROJECT, 2021
** Task0? - my_strncmp.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    for (; s1[i] == s2[i] && s1[i] && s2[i] && i < n; i++) {
        i++;
    }
    if ((s1[i] == '\0' && s2[i] == '\0') || i == n) {
        return 0;
    } else if (s1[i] > s2[i]) {
        return 1;
    } else {
        return -1;
    }
}
