/*
** EPITECH PROJECT, 2021
** get_csfml_keys - my_game_elements.c
** File description:
** jitter jitter
*/

#ifndef MY_GAME_ELEMENTS_H_
#define MY_GAME_ELEMENTS_H_

#include "my_sprite.h"

typedef struct dimensions_s {
    float w;
    float h;
} dimensions_t;

typedef struct position_s {
    int x;
    int y;
} position_t;

typedef struct asset_info_s {
    char *path;
    sfSprite *sprite;
    sfTexture *texture;
    dimensions_t dim;
    position_t pos;
    int status;
} asset_info_t;

typedef struct assets_s {
    asset_info_t ai1;
    asset_info_t ai2;
    asset_info_t ai3;
    asset_info_t ai4;
    int status;
} assets_t;

typedef struct dimensions_for_4_assets_s {
    dimensions_t dim1;
    dimensions_t dim2;
    dimensions_t dim3;
    dimensions_t dim4;
} dimensions_for_4_assets_t;

typedef struct  image_paths_s {
    char *path1;
    char *path2;
    char *path3;
    char *path4;
} image_paths_t;

asset_info_t load_an_asset(char *path, float width, float height);
assets_t load_4_assets(image_paths_t paths, dimensions_for_4_assets_t dim);
dimensions_t assing_dim_for_an_asset(float dim_x, float dim_y);
dimensions_for_4_assets_t assing_dim_for_4_assets(float *dims_x, float *dims_y);
void free_an_asset(asset_info_t asset);
void free_4_assets(assets_t assets);

#endif