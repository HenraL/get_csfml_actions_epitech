/*
** EPITECH PROJECT, 2021
** get_csfml_keys (Workspace)
** File description:
** display_sprite.c
*/

// #include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
// #include <SFML/Graphics/Sprite.h>
// #include <SFML/Graphics/Texture.h>
#include <stdlib.h>
#include "include/my_window.h"
#include "include/my_lib.h"
#include "include/my_maths.h"
#include "include/my_sprite.h"

// typedef struct sprite_s {
//     sfSprite *sprite;
//     sfTexture *texture;
//     sfVector2f position;
//     sfVector2f scale;
//     float previous_scale_x;
//     float previous_scale_y;
//     int status;
// } sprite_t;

// typedef struct s_framebuffer {
//     unsigned int width;
//     unsigned int height;
//     sfUint8 *pixels;
// } framebuffer_t;

// void free_sprite(sprite_t default_sprite)
// {
//     sfTexture_destroy(default_sprite.texture);
//     sfSprite_destroy(default_sprite.sprite);
// }

// float calc_percent(float factor, float nb, int up_or_down)
// {
//     float final_result;
//     float resulting_percentage_factor = ((factor / 100) * nb);
//     if (up_or_down == 1) {
//         final_result = nb + resulting_percentage_factor;
//     } else {
//         final_result = nb - resulting_percentage_factor;
//     }
//     return final_result;
// }

// sprite_t rescale_sprite(sprite_t default_sprite, float new_x, float new_y)
// {
//     sfVector2f scale = { new_x, new_y };
//     default_sprite.scale = scale;
//     default_sprite.previous_scale_x = new_x;
//     default_sprite.previous_scale_y = new_y;
//     sfSprite_setScale(default_sprite.sprite, scale);
//     return default_sprite;
// }

// sprite_t rescale_sprite_by_percent(sprite_t default_sprite, float fact, int up)
// {
//     float new_x = 0;
//     float new_y = 0;
//     new_x = calc_percent(fact, default_sprite.previous_scale_x, up);
//     new_y = calc_percent(fact, default_sprite.previous_scale_y, up);
//     default_sprite = rescale_sprite(default_sprite, new_x, new_y);
//     return default_sprite;
// }

// sprite_t move_sprite(sprite_t default_sprite, int x, int y)
// {
//     sfVector2f position = { x,y };
//     default_sprite.position = position;
//     sfSprite_setPosition(default_sprite.sprite, position);
//     return default_sprite;
// }

// sprite_t load_sprite(char *image_path)
// {
//     sprite_t default_sprite;
//     default_sprite.texture = sfTexture_createFromFile(image_path, NULL);
//     if (!default_sprite.texture) {
//         default_sprite.status = 84;
//         return default_sprite;
//     }
//     default_sprite.sprite = sfSprite_create();
//     sfSprite_setTexture(default_sprite.sprite, default_sprite.texture, sfFalse);//sfTrue);
//     sfVector2f scale_of_sprite = sfSprite_getScale(default_sprite.sprite);
//     default_sprite.previous_scale_x = scale_of_sprite.x;
//     default_sprite.previous_scale_y = scale_of_sprite.y;
//     default_sprite.status = 0;
//     return default_sprite;
// }

// framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
// {
//     framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));

//     framebuffer->width = width;
//     framebuffer->height = height;
//     framebuffer->pixels = malloc(width * height * 32 / 8);
//     return (framebuffer);
// }

int main2(void)
{
    char *image_path = "sprite_test copy.png";
    sfRenderWindow *window;
    framebuffer_t *fb;
    sprite_t sprite;
    sfEvent event;
    int x = 0;
    int y = 0;
    int count_x = 0;
    int count_y = 0;
    int factor = 0;
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
        sprite = move_sprite(sprite, x, y);
        // sprite = rescale_sprite(sprite, 5, 5);
        sprite = rescale_sprite_by_percent(sprite, factor, 1);
        //iii- Link the texture to the sprite
        // sfSprite_setTexture(sprite.sprite,
        //                     sprite.texture,
        //                     sfFalse);
        //iv- Draw the sprite in the window
        sfRenderWindow_drawSprite(window, sprite.sprite, NULL);
        //v- Display the window
        sfRenderWindow_display(window);
        x++;
        y++;
        // my_putstr("before if\n");
        // if (x < 800 && x > -1 && y < 800 && y > -1) {
        //     my_putstr("in if");
        //     if (x < 800 && count_x < 800) {
        //         my_putstr("x = ");
        //         my_put_nbr(x);
        //         my_putstr("\ncount_x = ");
        //         my_put_nbr(count_x);
        //         my_putchar('\n');
        //         x += 10;
        //         count_x += 10;
        //     } else if (x > -1 && count_x == 800) {
        //         my_putstr("x = ");
        //         my_put_nbr(x);
        //         my_putstr("\ncount_x = ");
        //         my_put_nbr(count_x);
        //         my_putchar('\n');
        //         x -= 10;
        //     } else if (x > -1 && count_x == 800) {
        //         my_putstr("x = ");
        //         my_put_nbr(x);
        //         my_putstr("\ncount_x = ");
        //         my_put_nbr(count_x);
        //         my_putchar('\n');
        //         count_x = 0;
        //     }
        //     if (y < 800 && count_y < 800) {
        //         my_putstr("y = ");
        //         my_put_nbr(y);
        //         my_putstr("\ncount_y = ");
        //         my_put_nbr(count_y);
        //         my_putchar('\n');
        //         y += 10;
        //         count_y += 10;
        //     } else if (y > -1 && count_y == 800) {
        //         my_putstr("y = ");
        //         my_put_nbr(y);
        //         my_putstr("\ncount_y = ");
        //         my_put_nbr(count_y);
        //         my_putchar('\n');
        //         y -= 10;
        //     } else if (y > -1 && count_y == 800) {
        //         my_putstr("y = ");
        //         my_put_nbr(y);
        //         my_putstr("\ncount_y = ");
        //         my_put_nbr(count_y);
        //         my_putchar('\n');
        //         count_y = 0;
        //     }
        // }
        if (factor < 101) {
            factor++;
        }
    }
    sfRenderWindow_destroy(window);
    framebuffer_destroy(fb);
    sfTexture_destroy(sprite.texture);
    sfSprite_destroy(sprite.sprite);

}

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
    sprite_t background_sprite1;
    sprite_t background_sprite2;
    // sprite_t background_sprite3;
    // path image settings //
    sprite_t path_sprite1;
    sprite_t path_sprite2;
    // ice image settings //
    sprite_t ice_sprite1;
    sprite_t ice_sprite2;
    // event generation //
    sfEvent event;
    /* loading the sprites */
    // background sprites //
    background_sprite1 = load_sprite(background_image_path);
    if (background_sprite1.status == 84) {
        return 84;
    }
    background_sprite2 = load_sprite(background_image_path);
    if (background_sprite2.status == 84) {
        return 84;
    }
    // background_sprite3 = load_sprite(image_path2);
    // if (background_sprite3.status == 84) {
    //     return 84;
    // }
    printf("background_sprite1.previous_scale_x = %.8f\n", background_sprite1.previous_scale_x);
    printf("background_sprite2.previous_scale_x = %.8f\n", background_sprite2.previous_scale_x);
    // printf("background_sprite3.previous_scale_x = %.8f\n", background_sprite3.previous_scale_x);
    // path sprites //
    path_sprite1 = load_sprite(path_image_path);
    if (path_sprite1.status == 84) {
        return 84;
    }
    path_sprite2 = load_sprite(path_image_path);
    if (path_sprite2.status == 84) {
        return 84;
    }
    // ice sprites //
    ice_sprite1 = load_sprite(ice_image_path);
    if (ice_sprite1.status == 84) {
        return 84;
    }
    ice_sprite2 = load_sprite(ice_image_path);
    if (ice_sprite2.status == 84) {
        return 84;
    }
    /* Setting the size of the images */
    // Background settings //
    int background_image_width = 1500;//1920;
    int background_image_height = 700;
    // path settings //
    int path_image_width = 1500;//1920;
    int path_image_height = 700;
    // ice settings //
    int ice_image_width = 1500;//1920;
    int ice_image_height = 700;
    /* rescaling sprites */
    // Background sprites //
    background_sprite1 = rescale_sprite(background_sprite1, 1, 0.5);
    background_sprite2 = rescale_sprite(background_sprite2, 1, 0.5);
    // background_sprite3 = rescale_sprite(background_sprite3, 1, 0.5);

    // path sprites //
    path_sprite1 = rescale_sprite(path_sprite1, 1, 0.5);
    path_sprite2 = rescale_sprite(path_sprite2, 1, 0.5);
    // ice sprites //
    ice_sprite1 = rescale_sprite(ice_sprite1, 1, 0.5);
    ice_sprite2 = rescale_sprite(ice_sprite2, 1, 0.5);
    /* initialising index counters */
    // background //
    int bs1_x = 0;
    int bs1_y = 0;
    int bs2_x = background_image_width;
    int bs2_y = 0;
    // int bs3_x = (background_image_width * 2);
    // int bs3_y = 0;
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
    int count_y = 0; //x
    int factor = 0;
    printf("bs1_x = %d\n", bs1_x);
    printf("bs2_x = %d\n", bs2_x);
    // printf("bs3_x = %d\n", bs3_x);
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
        background_sprite1 = move_sprite(background_sprite1, bs1_x, bs1_y);
        background_sprite2 = move_sprite(background_sprite2, bs2_x, bs2_y);
        // background_sprite3 = move_sprite(background_sprite3, bs3_x, bs3_y);
        // path //
        path_sprite1 = move_sprite(path_sprite1, ps1_x, ps1_y);
        path_sprite2 = move_sprite(path_sprite2, ps2_x, ps2_y);
        // ice //
        ice_sprite1 = move_sprite(ice_sprite1, is1_x, is1_y);
        ice_sprite2 = move_sprite(ice_sprite2, is2_x, is2_y);
        /* Display sprites in the window */
        // background //
        sfRenderWindow_drawSprite(window, background_sprite1.sprite, NULL);
        sfRenderWindow_drawSprite(window, background_sprite2.sprite, NULL);
        // sfRenderWindow_drawSprite(window, background_sprite3.sprite, NULL);
        // path //
        sfRenderWindow_drawSprite(window, path_sprite1.sprite, NULL);
        sfRenderWindow_drawSprite(window, path_sprite2.sprite, NULL);
        // ice //
        sfRenderWindow_drawSprite(window, ice_sprite1.sprite, NULL);
        sfRenderWindow_drawSprite(window, ice_sprite2.sprite, NULL);
        //v- Display the window
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfBlack);
        /* Debugging info for vars */
        // printf("bs1_x = %d\n", bs1_x);
        // printf("bs2_x = %d\n", bs2_x);
        // printf("bs3_x = %d\n", bs3_x);
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
        // if (bs3_x <= (background_image_width * -1)) {
            // bs3_x = max_width - background_sprite3.previous_scale_x;
            // bs3_x = max_width;
        // }
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
    free_sprite(background_sprite1);
    free_sprite(background_sprite2);
    // free_sprite(background_sprite3);
    // path sprite //
    free_sprite(path_sprite1);
    free_sprite(path_sprite2);
    // ice_sprite //
    free_sprite(ice_sprite1);
    free_sprite(ice_sprite2);
}
