/*
** EPITECH PROJECT, 2021
** my_screensaver (Workspace)
** File description:
** my_is_num.c
*/

#include "../../../include/my_lib.h"
#include <stdio.h>

int my_isnum(char const str)
{
    if (str > '/' && str < ':') {
        return 0;
    }
    return 1;
}
