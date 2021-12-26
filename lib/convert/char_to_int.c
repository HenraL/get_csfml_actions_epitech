/*
** EPITECH PROJECT, 2021
** my_screensaver - char_to_int.c
** File description:
** jitter jitter
*/

#include "../../include/my_lib.h"

char char_to_int(char str)
{
    int result = 0;
    result = str - '0';
    return result;
}

char cti(char str)
{
    char result;
    result = char_to_int(str);
    return result;
}