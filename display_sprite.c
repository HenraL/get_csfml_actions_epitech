/*
** EPITECH PROJECT, 2021
** get_csfml_keys (Workspace)
** File description:
** display_sprite.c
*/

// #include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <stdlib.h>
#include "include/my_window.h"

typedef struct sprite_s {
    sfSprite *sprite;
    sfTexture *texture;
    int status;
} sprite_t;

// typedef struct s_framebuffer {
//     unsigned int width;
//     unsigned int height;
//     sfUint8 *pixels;
// } framebuffer_t;

sprite_t load_sprite(char *image_path)
{
    sprite_t default_sprite;
    default_sprite.texture = sfTexture_createFromFile(image_path, NULL);
    if (!default_sprite.texture) {
        default_sprite.status = 84;
        return default_sprite;
    }
    default_sprite.sprite = sfSprite_create();
    sfSprite_setTexture(default_sprite.sprite, default_sprite.texture, sfTrue);
    default_sprite.status = 0;
    return default_sprite;

}

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));

    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(width * height * 32 / 8);
    return (framebuffer);
}

int main(void)
{
    char *image_path = "sprite_test copy.png";
    sfRenderWindow *window;
    framebuffer_t *fb;
    sprite_t sprite;
    sfEvent event;
    //1- Create the ressources
    window = createWindow(800, 800);
    fb = framebuffer_create(800, 800);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
        {
            /* Close window : exit */
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        //i- Draw in the Framebuffer
        sprite = load_sprite(image_path);
        if (sprite.status == 84) {
            return 84;
        }
        //ii- Put tbe frambuffer in the texture
        sfTexture_updateFromPixels(sprite.texture,
                                   fb->pixels,
                                   800, 800,
                                   0, 0);
        //iii- Link the texture to the sprite
        sfSprite_setTexture(sprite.sprite,
                            sprite.texture,
                            sfFalse);
        //iv- Draw the sprite in the window
        sfRenderWindow_drawSprite(window, sprite.sprite, NULL);
        //v- Display the window
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    framebuffer_destroy(fb);
    sfTexture_destroy(sprite.texture);
    sfSprite_destroy(sprite.sprite);

}