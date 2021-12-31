/*
** EPITECH PROJECT, 2021
** get_csfml_keys - set_colors.c
** File description:
** jitter jitter
*/

#include "../../include/my_text.h"

text_t set_colors(text_t my_text, sfColor fg, sfColor outline)
{
    my_text.fg = fg;
    sfColor test;
    sfText_setFillColor(my_text.text, fg);
    my_text.outline_color = outline;
    sfText_setOutlineColor(my_text.text, outline);
    return my_text;
}