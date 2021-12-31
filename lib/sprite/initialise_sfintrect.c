/*
** EPITECH PROJECT, 2021
** get_csfml_actions - initialise_sfintrect.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

sfIntRect initialise_sfintrect(int left, int top, int width, int height)
{
    sfIntRect rectangle_size;
    rectangle_size.height = height;
    rectangle_size.width = width;
    rectangle_size.left = left;
    rectangle_size.top = top;
    return rectangle_size;
}