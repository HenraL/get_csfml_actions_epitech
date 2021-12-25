/*
** EPITECH PROJECT, 2021
** bistro - my_putnbr_base.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

void my_convertnbr_base_rec(int nbr, char *base, int base_len, char *str)
{
    if (nbr < 0) {
        my_putchar('-');
    } else {
        nbr = -nbr;
    }
    if (nbr <= -base_len) {
        my_convertnbr_base_rec(-(nbr / base_len), base, base_len, str + 1);
    } else {
        str[1] = '\0';
    }
    *str = base[-(nbr % base_len)];
}

void my_putnbr_base(int nbr, char *base)
{
    int length = 0;
    char str[33];

    length = my_strlen(base);
    my_convertnbr_base_rec(nbr, base, length, str);
    my_revstr(str);
    my_putstr(str);
}

void my_putptr_base(void *ptr, char *base)
{
    int *tab;
    int nb_put = 0;
    int i = 0;

    tab = (int *)ptr;
    nb_put = sizeof(void *) / sizeof(int);
    for (; i < nb_put; i++) {
        my_putnbr_base(tab[i], base);
    }
}
