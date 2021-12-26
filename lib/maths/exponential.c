/*
** EPITECH PROJECT, 2021
** my_screensaver - exponential.c
** File description:
** jitter jitter
*/

#include "../../include/my_maths.h"

int exponential(int nb, int n)
{
    int i = 0;
    int result = 1;
    for (; i < n; i++) {
        result *= nb;
    }
    return result;
}

