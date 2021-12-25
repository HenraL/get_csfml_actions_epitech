/*
** EPITECH PROJECT, 2021
** Task0? - my_find_prime_sup.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

int my_find_prime_sup(int nb)
{
    if (nb > 2 && nb % 2 == 0) {
        nb++;
    } else {
        for (;my_find_prime_sup(nb) != 0; nb += 2) {
        }
    }
    return nb;

}
