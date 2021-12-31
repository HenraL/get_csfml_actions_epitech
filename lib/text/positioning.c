/*
** EPITECH PROJECT, 2021
** get_csfml_keys - positioning.c
** File description:
** jitter jitter
*/

#include "../../include/my_text.h"

text_t text_positioning(text_t my_text, int x, int y, float letter_spacing)
{
    my_text.x = x;
    my_text.y = y;
    move_text_using_strut(my_text);
    my_text.letter_spacing = letter_spacing;
    sfText_setLetterSpacing(my_text.text, letter_spacing);
    return my_text;
}