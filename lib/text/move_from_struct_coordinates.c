/*
** EPITECH PROJECT, 2021
** get_csfml_keys - move_from_struct_coordinates.c
** File description:
** jitter jitter
*/

#include "../../include/my_text.h"

text_t move_text_using_strut(text_t my_text)
{
    my_text = move_text(my_text, my_text.x, my_text.y);
    return my_text;
}