/*
** EPITECH PROJECT, 2021
** get_csfml_keys - free.c
** File description:
** jitter jitter
*/

#include "../../include/my_text.h"

void free_text(text_t my_text)
{
    sfText_destroy(my_text.text);
}