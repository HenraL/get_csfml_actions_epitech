/*
** EPITECH PROJECT, 2021
** Task0? - my_compute_square_root.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

int my_compute_square_root(int nb)
{
    int i = 0;
    if (nb < 0 || nb == 0) {
        return 0;
    }
    for (; i * i != nb; i++) {
        if (i > nb) {
            return 0;
        }
    }
    return i;
}
