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
    int max_width = 1920;//1500;
    int max_height = 1080;//700;
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
    bkgd_sprites.sprite_widths = 1500;
    bkgd_sprites.sprite_heights = 700;
    // path settings //1920x219
    path_sprites.sprite_widths = 1920;//1920;
    path_sprites.sprite_heights = 219;
    // ice settings //
    ice_sprites.sprite_widths = 1920;//1920;
    ice_sprites.sprite_heights = 219;
    /* initialising index counters */
    // background //
    bkgd_sprites = initialise_drag_axis(bkgd_sprites, 0);
    bkgd_sprites.s2_x = bkgd_sprites.sprite_widths;
    // path //
    path_sprites = initialise_drag_axis(path_sprites, 0);
    path_sprites.indent_level = 350;
    path_sprites.s1_y = path_sprites.indent_level;
    path_sprites.s2_x = path_sprites.sprite_widths;
    path_sprites.s2_y = path_sprites.indent_level;
    // ice //
    ice_sprites = initialise_drag_axis(ice_sprites, 0);
    ice_sprites.indent_level = path_sprites.indent_level + 125;
    ice_sprites.s1_y = ice_sprites.indent_level;
    ice_sprites.s2_x = ice_sprites.sprite_widths;
    ice_sprites.s2_y = ice_sprites.indent_level;
    printf("bs1_x = %d\n", bkgd_sprites.s1_x);
    printf("bs2_x = %d\n", bkgd_sprites.s2_x);
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
        bkgd_sprites = move_two_sprites(bkgd_sprites);
        // path //
        path_sprites = move_two_sprites(path_sprites);
        // // ice //
        ice_sprites = move_two_sprites(ice_sprites);
        /* Display sprites in the window */
        // background //
        draw_two_sprites(window, bkgd_sprites, NULL);
        // path //
        draw_two_sprites(window, path_sprites, NULL);
        // ice //
        draw_two_sprites(window, ice_sprites, NULL);
        //v- Display the window
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfBlack);
        // Background //
        bkgd_sprites = is_reset_drag_needed(bkgd_sprites, max_width);
        // path //
        path_sprites = is_reset_drag_needed(path_sprites, max_width);
        // ice //
        ice_sprites = is_reset_drag_needed(ice_sprites, max_width);
        /*changing values of indexes */
        // background //
        bkgd_sprites = change_two_val(bkgd_sprites, 0, 1);
        // path //
        path_sprites = change_two_val(path_sprites, 0, 5);
        // ice //
        ice_sprites = change_two_val(ice_sprites, 0, 10);
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
