/*
** EPITECH PROJECT, 2021
** get_csfml_keys - load_walls.c
** File description:
** jitter jitter
*/

#include "../../include/my_game_elements.h"



assets_t load_4_assets(image_paths_t paths, dimensions_for_4_assets_t dim)
{
    assets_t asset;
    asset_info_t ai1 = load_an_asset(paths.path1, dim.dim1.w, dim.dim1.h);
    if (ai1.status == 84) {
        asset.status = 84;
        return asset;
    }
    asset_info_t ai2 = load_an_asset(paths.path2, dim.dim2.w, dim.dim2.h);
    asset_info_t ai3 = load_an_asset(paths.path3, dim.dim3.w, dim.dim3.h);
    asset_info_t ai4 = load_an_asset(paths.path4, dim.dim4.w, dim.dim4.h);
    if (ai2.status == 84 || ai3.status == 84 || ai4.status == 84) {
        asset.status = 84;
        return asset;
    }
    asset.ai1 = ai1;
    asset.ai2 = ai2;
    asset.ai3 = ai3;
    asset.ai4 = ai4;
    return asset;
}