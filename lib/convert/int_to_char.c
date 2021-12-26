/*
** EPITECH PROJECT, 2021
** my_screensaver - int_to_char.c
** File description:
** jitter jitter
*/

#include "../../include/my_lib.h"

char int_to_char(int nb)
{
    char result;
    result = nb + '0';
    return result;
}

char itct(int nb)
{
    char result;
    result = int_to_char(nb);
    return result;
}