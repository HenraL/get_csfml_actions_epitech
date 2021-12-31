/*
** EPITECH PROJECT, 2021
** get_csfml_keys - show.c
** File description:
** jitter jitter
*/

#include "../../include/my_mouse.h"

void show_mouse(sfRenderWindow *window)
{
    sfRenderWindow_setMouseCursorVisible(window, sfTrue);
}