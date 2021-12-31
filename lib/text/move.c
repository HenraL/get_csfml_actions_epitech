/*
** EPITECH PROJECT, 2021
** get_csfml_keys - move.c
** File description:
** jitter jitter
*/

#include "../../include/my_text.h"

text_t move_text(text_t my_text, int x, int y)
{
    sfVector2f position = { x,y };
    // sfText_move(my_text.text, position);
    sfText_setPosition(my_text.text, position);
    return my_text;
}