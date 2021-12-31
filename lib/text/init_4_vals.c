/*
** EPITECH PROJECT, 2021
** get_csfml_keys - init_4_vals.c
** File description:
** jitter jitter
*/

#include "../../include/my_text.h"

sfGlslIvec4 init_4_vals(int val1, int val2, int val3, int val4)
{
    sfGlslIvec4 my_vals;
    my_vals.w = val1;
    my_vals.x = val2;
    my_vals.y = val3;
    my_vals.z = val4;
    return my_vals;
}