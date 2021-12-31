/*
** EPITECH PROJECT, 2021
** get_csfml_actions - initialise_sfintrect.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

sfFloatRect initialise_sffloatrect(float left, float top, float width,
                                   float height)
{
    sfFloatRect rectangle_size;
    rectangle_size.height = height;
    rectangle_size.width = width;
    rectangle_size.left = left;
    rectangle_size.top = top;
    return rectangle_size;
}