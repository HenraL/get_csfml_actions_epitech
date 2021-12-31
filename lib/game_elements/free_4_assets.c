/*
** EPITECH PROJECT, 2021
** get_csfml_keys - free_4_assets.c
** File description:
** jitter jitter
*/

#include "../../include/my_game_elements.h"

void free_4_assets(assets_t assets)
{
    free_an_asset(assets.ai1);
    free_an_asset(assets.ai2);
    free_an_asset(assets.ai3);
    free_an_asset(assets.ai4);
}