/*
** EPITECH PROJECT, 2021
** my_screensaver - display_help.c
** File description:
** jitter jitter
*/

#include "../../include/my_lib.h"
#include "../../include/my_help.h"


int help_display(int index)
{
    if (index > 4 || index < 0) {
        my_putstr("Please enter a whole positive number smaller than 5\n");
        return 84;
    }
    help_in_general(index);
    help_prog_options(index);
    help_rgba(index);
    help_speed(index);
    return 0;
}