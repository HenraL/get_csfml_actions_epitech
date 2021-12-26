/*
** EPITECH PROJECT, 2021
** my_screensaver (Workspace)
** File description:
** help_prog_options.c
*/

#include "../../include/my_help.h"
#include "../../include/my_lib.h"

void help_prog_options_calling(void)
{
    my_putstr("CALLING:\n");
    my_putstr("Add the P option to indicate which program you wish to run\n");
}

void help_prog_options_p_options(void)
{
    my_putstr("OPTIONS OF P : \nC : \n");
    my_putstr("\t-\tP1S<size>\tdisplay a square of a given size.\n");
    my_putstr("\t-\tP2S<size>\tdisplay an animated square of a given size.\n");
    my_putstr("\t-\tP3\tDisplay a gradient image of a fixed size\n");
    my_putstr("\t-\tP4\tDisplay an animated gradient image of a fixed size\n");
    my_putstr("\t-\tP5S<nb>\tDisplay a certain amount of pixels at random");
    my_putstr("          places.\n");
}

void help_prog_options_example(void)
{
    my_putstr("\nEXAMPLE:");
    my_putstr("Ther are no examples to display, because the function outputs ");
    my_putstr("a graphical image.\n");
}

void help_prog_options(int index)
{
    if (index == 0 || index == 2) {
        my_putstr("HELP FOR P:\n");
        help_prog_options_calling();
        help_prog_options_p_options();
        help_prog_options_example();
        my_putstr("If C is given on its own, it will be ignored.\n");
    }
}