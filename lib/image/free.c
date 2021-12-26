/*
** EPITECH PROJECT, 2021
** runner - display.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

void free_sprite(image_t image)
{
    sfImage_destroy(image.sprite);
    sfTexture_destroy(image.texture);
}