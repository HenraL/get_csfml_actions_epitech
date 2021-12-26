/*
** EPITECH PROJECT, 2021
** my_screensaver (Workspace)
** File description:
** help_in_general.c
*/

#include "../../include/my_help.h"
#include "../../include/my_lib.h"

void help_general_help_calling(void)
{
    my_putstr("CALLING:\n");
    my_putstr("To display the help page, type -h or -H\n");
    my_putstr("To run a program type -P<program_id>\n");
    my_putstr("To run a program with modified parameters type:\n");
    my_putstr("\t-\t-P<program id>CR<color>G<color>B<color>A<color>S<speed>\n");

}

void help_general_help_h_options(void)
{
    my_putstr("OPTIONS OF H : \nH : \n");
    my_putstr("\t-\t-h\tdisplay this help page\n");
    my_putstr("\t-\t-h0\tdisplay all the help pages\n");
    my_putstr("\t-\t-h1\tdisplay this help page\n");
    my_putstr("\t-\t-h2\tdisplay the help for the program option\n");
    my_putstr("\t-\t-h3\tdisplay the help for the rgba option\n");
    my_putstr("\t-\t-h4\tdisplay the help for the speed option\n");
}

void help_general_help_example(void)
{
    my_putstr("\nEXAMPLE:\n");
    my_putstr("\t-\t-H0 :\n");
    my_putstr("\t\t-\tThis will display all the help for the program.\n");
    my_putstr("\t-\t-P1\n");
    my_putstr("\t\t-\tThis will display the program n°1.\n");
}

void help_in_general(int index)
{
    if (index == 0 || index == 1) {
        my_putstr("HELP FOR H:\n");
        help_general_help_calling();
        help_general_help_h_options();
        help_general_help_example();
        my_putstr("If S is given on its own, it will be ignored.\n");
    }
}