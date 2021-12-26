/*
** EPITECH PROJECT, 2021
** my_screensaver - int_long_to_char_star.c
** File description:
** jitter jitter
*/

#include "../../include/my_lib.h"

char *nb_to_char_star(int nb)
{
    char *result;
    int i = 0;
    for (; nb != 0; i++) {
        result[i] = (nb % 10) + '0';
        nb = nb / 10;
    }
    result = my_revstr(result);
    return result;
}

char *ntcs(int nb)
{
    char *result;
    int i = 0;
    for (; nb != 0; i++) {
        result[i] = (nb % 10) + '0';
        nb = nb / 10;
    }
    result = my_revstr(result);
    return result;
}