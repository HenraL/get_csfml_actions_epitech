/*
** EPITECH PROJECT, 2021
** get_csfml_keys - initialise.c
** File description:
** jitter jitter
*/

#include "../../include/my_key.h"

move_t initialise(move_t move)
{
    move.up = 0;
    move.down = 0;
    move.left = 0;
    move.right = 0;
    move.center = 0;
    return move;
}