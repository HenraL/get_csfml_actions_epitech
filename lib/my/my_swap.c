/*
** EPITECH PROJECT, 2021
** Task01 - my_swap.c
** File description:
** abc.
*/

#include "../../include/my_lib.h"

void my_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
