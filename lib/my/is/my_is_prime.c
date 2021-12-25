/*
** EPITECH PROJECT, 2021
** Task0? - my_is_prime.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

int my_is_prime(int nb)
{
    int i = 2;
    if (nb < 0) {
        nb *= -1;
    } else if (nb == 0 || nb == 1) {
        return 0;
    } else {
        if (nb % 2 == 0) {
            return 0;
        }
    }
    for (; i <= (nb / 2) && (nb != 0 || nb != 1); i++) {
        if (nb % i == 0) {
            return 0;
        }
    }
    return 1;
}
