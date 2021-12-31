/*
** EPITECH PROJECT, 2021
** get_csfml_keys - assing_dimensions_for_4_assets.c
** File description:
** jitter jitter
*/

#include "../../include/my_game_elements.h"

dimensions_for_4_assets_t assing_dim_for_4_assets(float *dims_x, float *dims_y)
{
    dimensions_for_4_assets_t dim_4_4_assets;
    dim_4_4_assets.dim1 = assing_dim_for_an_asset(dims_x[0], dims_y[0]);
    dim_4_4_assets.dim2 = assing_dim_for_an_asset(dims_x[1], dims_y[1]);
    dim_4_4_assets.dim3 = assing_dim_for_an_asset(dims_x[2], dims_y[2]);
    dim_4_4_assets.dim4 = assing_dim_for_an_asset(dims_x[3], dims_y[3]);
    return dim_4_4_assets;
}