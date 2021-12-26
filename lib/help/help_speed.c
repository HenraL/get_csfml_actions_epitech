/*
** EPITECH PROJECT, 2021
** my_screensaver - help_speed.c
** File description:
** jitter jitter
*/

#include "../../include/my_help.h"
#include "../../include/my_lib.h"

void help_speed_calling(void)
{
    my_putstr("CALLING:\n");
    my_putstr("Add the S option to change the speed of the program\n");
}

void help_speed_s_options(void)
{
    my_putstr("OPTIONS OF S : \nC : \n");
    my_putstr("\t-\tS<int speed in px (0->750)>\tChange the speed of ");
    my_putstr("the animation.\n");
}

void help_speed_example(void)
{
    my_putstr("\nEXAMPLE:\n");
    my_putstr("\t - \tS255 :\n");
    my_putstr("\t\t-\t sets the speed to +255 pixels between each frame.\n");
}

void help_speed(int index)
{
    if (index == 0 || index == 4) {
        my_putstr("HELP FOR S:\n");
        help_speed_calling();
        help_speed_s_options();
        help_speed_example();
        my_putstr("If S is given on its own, it will be ignored.\n");
    }
}