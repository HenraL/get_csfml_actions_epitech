/*
** EPITECH PROJECT, 2021
** get_csfml_actions - load.c
** File description:
** jitter jitter
*/

#include "../../include/my_sprite.h"

sprite_t load_sprite(char *image_path)
{
    sprite_t default_sprite;
    default_sprite.texture = sfTexture_createFromFile(image_path, NULL);
    if (!default_sprite.texture) {
        default_sprite.status = 84;
        return default_sprite;
    }
    default_sprite.sprite = sfSprite_create();
    sfSprite_setTexture(default_sprite.sprite, default_sprite.texture, sfFalse);
    sfVector2f scale_of_sprite = sfSprite_getScale(default_sprite.sprite);
    default_sprite.previous_scale_x = scale_of_sprite.x;
    default_sprite.previous_scale_y = scale_of_sprite.y;
    default_sprite.status = 0;
    return default_sprite;
}

sprite_t load_character(char *image_path, sfFloatRect char_rect, sfIntRect dim)
{
    sprite_t default_sprite;
    default_sprite.texture = sfTexture_createFromFile(image_path, &char_rect);
    if (!default_sprite.texture) {
        default_sprite.status = 84;
        return default_sprite;
    }
    default_sprite.sprite = sfSprite_create();
    sfSprite_setTexture(default_sprite.sprite, default_sprite.texture, sfTrue);
    sfVector2f scale_of_sprite = sfSprite_getScale(default_sprite.sprite);
    sfSprite_setTextureRect(default_sprite.sprite, dim);
    default_sprite.previous_scale_x = scale_of_sprite.x;
    default_sprite.previous_scale_y = scale_of_sprite.y;
    default_sprite.h = char_rect.height;
    default_sprite.w = char_rect.width;
    default_sprite.sprite_rect = dim;
    default_sprite.anim = init_anim(char_rect, dim);
    default_sprite.status = 0;
    return default_sprite;
}