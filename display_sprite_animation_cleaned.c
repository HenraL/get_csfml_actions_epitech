/*
** EPITECH PROJECT, 2021
** get_csfml_keys (Workspace)
** File description:
** display_sprite.c
*/

#include <stdlib.h>
#include "include/my_window.h"
#include "include/my_lib.h"
#include "include/my_maths.h"
#include "include/my_sprite.h"

int main(void)
{
    /* image_paths */
    // Background path //
    char *background_image_path = "img/background/Background.png";
    char *background_image_path2 = "img/background/block.jpg";
    // path path //
    char *path_image_path = "img/background/path.png";
    // ice path //
    char *ice_image_path = "img/background/ice.png";
    sfRenderWindow *window;
    framebuffer_t *fb;
    /* Window size */
    int max_width = 1500;
    int max_height = 700;
    /* sprite_vars */
    // Background image settings //
    two_sprites_t bkgd_sprites = load_two_sprite(background_image_path,
                                                 background_image_path,
                                                 1, 0.5);
    // path image settings //
    two_sprites_t path_sprites = load_two_sprite(path_image_path,
                                                 path_image_path, 1, 0.5);
    // ice image settings //
    two_sprites_t ice_sprites = load_two_sprite(ice_image_path, ice_image_path,
                                                1, 0.5);
    // event generation //
    sfEvent event;
    /* loading the sprites */
    // background sprites //
    if (bkgd_sprites.status == 84) {
        return 84;
    }
    // path sprites //
    if (path_sprites.status == 84) {
        return 84;
    }
    // ice sprites //
    if (ice_sprites.status == 84) {
        return 84;
    }
    /* Setting the size of the images */
    // Background settings //
    int background_image_width = 1500;
    int background_image_height = 700;
    // path settings //
    int path_image_width = 1500;//1920;
    int path_image_height = 700;
    // ice settings //
    int ice_image_width = 1500;//1920;
    int ice_image_height = 700;
    /* initialising index counters */
    // background //
    int bs1_x = 0;
    int bs1_y = 0;
    int bs2_x = background_image_width;
    int bs2_y = 0;
    // path //
    int p_indent_level = 350;
    int ps1_x = 0;
    int ps1_y = 0 + p_indent_level;
    int ps2_x = path_image_width;
    int ps2_y = 0 + p_indent_level;
    // ice //
    int i_indent_level = p_indent_level + 125;
    int is1_x = 0;
    int is1_y = 0 + i_indent_level;
    int is2_x = ice_image_width;
    int is2_y = 0 + i_indent_level;

    int count_x = 0;
    int count_y = 0;
    int factor = 0;
    printf("bs1_x = %d\n", bs1_x);
    printf("bs2_x = %d\n", bs2_x);
    //1- Create the ressources
    window = createWindow(max_width, max_height);
    fb = framebuffer_create(max_width, max_height);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
        {
            /* Close window : exit */
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        /* Move sprites */
        // Background //
        bkgd_sprites.sprite1 = move_sprite(bkgd_sprites.sprite1, bs1_x, bs1_y);
        bkgd_sprites.sprite2 = move_sprite(bkgd_sprites.sprite2, bs2_x, bs2_y);
        // background_sprite3 = move_sprite(background_sprite3, bs3_x, bs3_y);
        // path //
        path_sprites.sprite1 = move_sprite(path_sprites.sprite1, ps1_x, ps1_y);
        path_sprites.sprite2 = move_sprite(path_sprites.sprite2, ps2_x, ps2_y);
        // ice //
        ice_sprites.sprite1 = move_sprite(ice_sprites.sprite1, is1_x, is1_y);
        ice_sprites.sprite2 = move_sprite(ice_sprites.sprite2, is2_x, is2_y);
        /* Display sprites in the window */
        // background //
        sfRenderWindow_drawSprite(window, bkgd_sprites.sprite1.sprite, NULL);
        sfRenderWindow_drawSprite(window, bkgd_sprites.sprite2.sprite, NULL);
        // sfRenderWindow_drawSprite(window, background_sprite3.sprite, NULL);
        // path //
        sfRenderWindow_drawSprite(window, path_sprites.sprite1.sprite, NULL);
        sfRenderWindow_drawSprite(window, path_sprites.sprite2.sprite, NULL);
        // ice //
        sfRenderWindow_drawSprite(window, ice_sprites.sprite1.sprite, NULL);
        sfRenderWindow_drawSprite(window, ice_sprites.sprite2.sprite, NULL);
        //v- Display the window
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfBlack);
        /* Debugging info for vars */
        // printf("bs1_x = %d\n", bs1_x);
        // printf("bs2_x = %d\n", bs2_x);
        /* conditions for the index to reset */
        // Background //
        if (bs1_x <= (background_image_width * -1)) {
            // bs1_x = max_width - background_sprite1.previous_scale_x;
            bs1_x = max_width;
            // printf("bs1_x = %d\n", bs1_x);
        }
        if (bs2_x <= (background_image_width * -1)) {
            // bs2_x = max_width - background_sprite2.previous_scale_x;
            bs2_x = max_width;
            // printf("bs2_x = %d\n", bs2_x);
        }
        // path //
        if (ps1_x <= (path_image_width * -1)) {
            ps1_x = max_width;
        }
        if (ps2_x <= (path_image_width * -1)) {
            ps1_x = max_width;
        }
        // ice //
        if (is1_x <= (ice_image_width * -1)) {
            is1_x = max_width;
        }
        if (is2_x <= (ice_image_width * -1)) {
            is1_x = max_width;
        }
        /*changing values of indexes */
        // background //
        bs1_x -= 1;
        bs2_x -= 1;
        // bs3_x -= 1;
        // path //
        ps1_x -= 5;
        ps2_x -= 5;
        // ice //
        is1_x -= 10;
        is2_x -= 10;
        sfRenderWindow_setFramerateLimit(window, 120);
    }
    sfRenderWindow_destroy(window);
    framebuffer_destroy(fb);
    /* freeing ressources */
    // background sprites //
    free_two_sprites(bkgd_sprites);
    // path sprite //
    free_two_sprites(path_sprites);
    // ice_sprite //
    free_two_sprites(ice_sprites);
}
