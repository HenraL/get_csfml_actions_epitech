/*
** EPITECH PROJECT, 2021
** get_csfml_keys (Workspace)
** File description:
** rgba.c
*/

#include "../../include/my_text.h"

sfColor rgba(sfUint8 r, sfUint8 g, sfUint8 b, sfUint8 a)
{
    sfColor my_color;
    my_color.r = r;
    my_color.g = g;
    my_color.b = b;
    my_color.a = a * 255;
    return my_color;
}