/*
** EPITECH PROJECT, 2021
** Task0? - my_showstr.c
** File description:
** abc
*/

#include "../../../include/my_lib.h"

int my_showstr(char const *str)
{
    int i = 0;
    for (; str[i] != '\0'; i++) {
        if (my_str_isprintable(str)) {
            my_putchar(str[i]);
        } else {
            my_putchar('\\');
            if (str[i] < 16) {
                my_putchar('0');
            }
            my_putnbr_base(str[i], "0123456789abcdef");
        }
    }
}
