/*
** EPITECH PROJECT, 2021
** runner - display.c
** File description:
** jitter jitter
*/

#include "../../include/my_image.h"

void display_image(sfRenderWindow *window, image_t sprite,
                   sfRenderStates *state)
{
    sfRenderWindow_drawSprite(window, image.image, state);
}