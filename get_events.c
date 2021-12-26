/*
** EPITECH PROJECT, 2021
** get_csfml_keys (Workspace)
** File description:
** display_sprite.c
*/

// #include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <stdlib.h>
#include <SFML/Window/Event.h>
#include "include/my_window.h"
#include "include/my_lib.h"

typedef struct sprite_s {
    sfSprite *sprite;
    sfTexture *texture;
    int status;
} sprite_t;

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));

    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(width * height * 32 / 8);
    return (framebuffer);
}

int wich_key(sfEvent event) {
    my_putchar(event.key.code);
    my_putstr(" = ");
    my_put_nbr(event.key.code);
    my_putchar('\n');
    if (event.key.code == 'a') {
        my_putstr("a was pressed.\n");
    }
    if (event.key.shift == sfTrue && event.key.code == 'a') {
        my_putstr("A was pressed.\n");
    }
    if (event.key.shift == sfTrue) {
        my_putstr("event.key.shift == true\n");
    }
}

int handle_event(sfEvent event)
{
    if (event.type == sfEvtKeyReleased) {
        my_putstr("Key Releassed!\n");
        wich_key(event);
    } else if (event.type == sfEvtMouseButtonReleased) {
        my_putstr("Mouse Button Releassed!\n");
    }
    return 0;
}

int main(void)
{
    char *music_path = "ogg/facebook_pop.ogg";
    sfRenderWindow *window;
    framebuffer_t *fb;
    sfEvent event;
    window = createWindow(800, 800);
    fb = framebuffer_create(800, 800);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
        {
            /* Close window : exit */
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
            handle_event(event);
        }

        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    framebuffer_destroy(fb);
}