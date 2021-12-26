/*
** EPITECH PROJECT, 2021
** my_screensaver (Workspace)
** File description:
** help_rgba.c
*/

#include "../../include/my_help.h"
#include "../../include/my_lib.h"

void help_rgba_calling(void)
{
    my_putstr("CALLING:\n");
    my_putstr("Add the C option to indicate that you wish to set ");
    my_putstr("the color.\n\n");
}

void help_rgba_c_options(void)
{
    my_putstr("OPTIONS OF C : \nC : \n");
    my_putstr("\t-\tR<color_range (0->255)>\tset the color of the red digit\n");
    my_putstr("\t-\tG<color_range (0->255)>\tset the color of");
    my_putstr(" the green digit\n");
    my_putstr("\t-\tB<color_range (0->255)>\tset the color of");
    my_putstr(" the blue digit\n");
    my_putstr("\t-\tA<color_range (0->255)>\tset the transaprency level\n");
}

void help_rgba_example(void)
{
    my_putstr("\nEXAMPLE:\n\t-\tCR20G30B40A255 :\n");
    my_putstr("\t\t-\tC -> indicate that we wish to set the color\n");
    my_putstr("\t\t-\tR20 -> indicate that we wish to se the R byte to 20\n");
    my_putstr("\t\t-\tG30 -> indicate that we wish to se the G byte to 30\n");
    my_putstr("\t\t-\tB40 -> indicate that we wish to se the B byte to 40\n");
    my_putstr("\t\t-\tA255->indicate that we wish to se the A byte to 255\n");
    my_putstr("\n\t-\tCR20G30B40 :\n");
    my_putstr("\t\t-\tC -> indicate that we wish to set the color\n");
    my_putstr("\t\t-\tR20 -> indicate that we wish to se the R byte to 20\n");
    my_putstr("\t\t-\tG30 -> indicate that we wish to se the G byte to 30\n");
    my_putstr("\t\t-\tB40 -> indicate that we wish to se the B byte to 40\n");
    my_putstr("\t\t-\t(no A) -> When not given, is set to 255 by default\n");
    my_putstr("\n\t-\tCA255 :\n");
    my_putstr("\t\t-\tC -> indicate that we wish to set the color\n");
    my_putstr("\t\t-\t(no R) -> When not given, is set to 255 by default\n");
    my_putstr("\t\t-\t(no G) -> When not given, is set to 255 by default\n");
    my_putstr("\t\t-\t(no B) -> When not given, is set to 255 by default\n");
    my_putstr("\t\t-\tA255->indicate that we wish to se the A byte to 255\n");
}

void help_rgba(int index)
{
    if (index == 0 || index == 3) {
        my_putstr("HELP FOR RGBA:\n");
        help_rgba_calling();
        help_rgba_c_options();
        help_rgba_example();
        my_putstr("If C is given on its own, it will be ignored.\n");
    }
}