/*
** EPITECH PROJECT, 2021
** get_csfml_keys - hide.c
** File description:
** jitter jitter
*/

#include "../../include/my_mouse.h"

void hide_mouse(sfRenderWindow *window)
{
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
}