/*
** EPITECH PROJECT, 2021
** Task03 - my_strlen.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

int my_strlen(char const *str)
{
    int nb_chr = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        nb_chr++;
    }
    return nb_chr;
}
