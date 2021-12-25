/*
** EPITECH PROJECT, 2021
** Task0? - my_showmem.c
** File description:
** abc
*/

#include "../../include/my_lib.h"

char for_1(int size, char *str2)
{
    int i = 0;
    for (; i < size; i++) {
        if (str2[i] < 16) {
            my_putchar('0');
        }
        my_putnbr_base(str2[i], "0123456789ABCDEF");
        if (i % 2 == 1) {
            my_putchar(' ');
        }
    }
}

char for_2(int size, char *str2)
{
    int i = 0;
    for (; i < size; i++) {
        if (my_str_isprintable(str2) == 1) {
            my_putchar(str2[i]);
        } else {
            my_putchar('.');
        }
    }
}

void show_line(char const *str, int size)
{
    char *str2;
    str2 = my_strcpy(str2, str);
    my_putptr_base(str2, "0123456789ABCDEF");
    my_putstr(": ");
    for_1(size, str2);
    for_2(size, str2);
    my_putchar('\n');
}

int my_showmem(char const *str, int size)
{
    int i = 0;
    for (; i < size; i++) {
        show_line(str, 16);
        str += 16;
    }
}
