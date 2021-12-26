/*
** EPITECH PROJECT, 2021
** get_csfml_keys - display.c
** File description:
** jitter jitter
*/

#include "../../include/my_lib.h"
#include "../../include/my_key.h"

void display_content(char* description, int element)
{
    my_putstr(description);
    my_putstr(" = ");
    my_put_nbr(element);
    my_putchar('\n');
}

void display(move_t move)
{
    display_content("move.up", move.up);
    display_content("move.down", move.down);
    display_content("move.left", move.left);
    display_content("move.right", move.right);
    display_content("move.center", move.center);
}