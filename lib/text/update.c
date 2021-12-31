/*
** EPITECH PROJECT, 2021
** get_csfml_keys - update.c
** File description:
** jitter jitter
*/

#include "../../include/my_text.h"

text_t update_text(text_t my_text, char *new_string)
{
    sfText_setString(my_text.text, new_string);
    return my_text;
}