/*
** EPITECH PROJECT, 2021
** Task04 - my_compute_power_rec.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

int my_compute_power_rec(int nb, int p)
{
    if (p < 0) {
        return 0;
    }
    if (p == 0) {
        return 1;
    }
    p--;
    return (nb * my_compute_power_rec(nb, p));
}
