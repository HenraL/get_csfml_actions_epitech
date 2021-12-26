/*
** EPITECH PROJECT, 2021
** my_screensaver - free.c
** File description:
** jitter jitter
*/

#include <stdlib.h>
#include "../../include/my_dict.h"

void dict_free(dict_t **dict)
{
    free(dict);
}