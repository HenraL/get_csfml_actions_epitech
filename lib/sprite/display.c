/*
** EPITECH PROJECT, 2021
** runner - display.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"
#include "../../include/my_window.h"

void display_sprite(sfRenderWindow *window, sprite_t sprite,
                    sfRenderStates *state)
{
    sfRenderWindow_drawSprite(window, sprite.sprite, state);
}