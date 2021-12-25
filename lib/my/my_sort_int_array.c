/*
** EPITECH PROJECT, 2021
** Task0? - my_sort_int_array.c
** File description:
** abc
*/

#include "../../include/my_lib.h"

void my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int issort = 1;
    int nb = 0;

    for (; issort == 0; nb++) {
        i = 0;
        issort = 1;
        for (;(i + 1) < size;i++) {
            if (tab[i] > tab[i + 1]) {
                issort = 0;
                my_swap(&tab[i], &tab[i + 1]);
            }
        }
    }
}
