/*
** EPITECH PROJECT, 2021
** my_screensaver (Workspace)
** File description:
** my_is_even.c
*/

#include "../../../include/my_lib.h"
int my_is_even(int nb)
{
    if ((nb % 2) == 0) {
        return 0;
    } else {
        return 1;
    }
}