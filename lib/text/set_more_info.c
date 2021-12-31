/*
** EPITECH PROJECT, 2021
** get_csfml_keys - set_more_info.c
** File description:
** jitter jitter
*/

#include "../../include/my_text.h"

text_t set_more_info(text_t my_text, float thickness, float r, sfUint32 style)
{
    my_text.outline_thickness = thickness;
    sfText_setOutlineThickness(my_text.text, thickness);
    my_text.rotation = r;
    sfText_setRotation(my_text.text, r);
    my_text.style = style;
    sfText_setStyle(my_text.text, style);
    return my_text;
}