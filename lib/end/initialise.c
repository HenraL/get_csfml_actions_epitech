/*
** EPITECH PROJECT, 2021
** get_csfml_keys - initialise.c
** File description:
** jitter jitter
*/

#include "../../include/my_end.h"

end_values_t initialise_end_values(sprite_t sprite1, sprite_t sprite2, int type)
{
    end_values_t end_values;
    end_values.sprite_won = sprite1;
    end_values.sprite_lost = sprite2;
    end_values.type = type;
    return end_values;
}