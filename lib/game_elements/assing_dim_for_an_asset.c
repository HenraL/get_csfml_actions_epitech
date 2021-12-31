/*
** EPITECH PROJECT, 2021
** get_csfml_keys - assing_dim_for_an_asset.c
** File description:
** jitter jitter
*/

#include "../../include/my_game_elements.h"

dimensions_t assing_dim_for_an_asset(float dim_x, float dim_y)
{
    dimensions_t dim_for_an_asset;
    dim_for_an_asset.h = dim_y;
    dim_for_an_asset.w = dim_x;
    return dim_for_an_asset;
}