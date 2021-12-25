/*
** EPITECH PROJECT, 2021
** Bootstrap - test.c
** File description:
** abc
*/

#include "../../include/my_lib.h"

int call_two(int argc, char **argv)
{
    char *el1 = argv[1];
    const char *el2 = argv[2];
    int len_el1 = my_strlen(el1);
    int len_el2 = my_strlen(el2);
    char in_it = in(el1, el2);
    if (in_it == 0) {
        my_putstr(" 0\n");
    } else if (in_it == 1) {
        my_putstr(" 1\n");
    }

}

int main(int argc, char **argv)
{
    if (argc > 2) {
        call_two(argc, argv);
    } else {
        my_putstr("Please enter two arguments.\nYou have entered :");
        my_putchar(argc + '0');
        my_putstr("\n");
    }
}