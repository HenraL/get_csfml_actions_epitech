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
    sfSprite_setTexture(default_sprite.sprite, default_sprite.texture, sfFalse);//sfTrue);
    sfVector2f scale_of_sprite = sfSprite_getScale(default_sprite.sprite);
    default_sprite.previous_scale_x = scale_of_sprite.x;
    default_sprite.previous_scale_y = scale_of_sprite.y;
    default_sprite.status = 0;
    return default_sprite;
}