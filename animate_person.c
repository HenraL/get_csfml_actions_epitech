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
// #include "include/my_event.h"
// #include <SFML/Window/Cursor.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window.h>


typedef struct initialise_backgrounds_s {
    two_sprites_t background1;
    two_sprites_t background2;
    two_sprites_t background3;
    int status;
} initialise_backgrounds_t;

initialise_backgrounds_t init_backgrounds(char *path1, char *path2, char *path3)
{
    initialise_backgrounds_t init_bkgd;
    float inc_factor_h = 0.4;
    float inc_factor_w = 0;
    // Background image settings //
    two_sprites_t bkgd_sprites = load_two_sprite(path1, path1, 1 + inc_factor_w, 0.5 + inc_factor_h);
    // path image settings //
    two_sprites_t path_sprites = load_two_sprite(path2, path2, 1 + inc_factor_w, 0.7 + inc_factor_h);//0.5);
    // ice image settings //
    two_sprites_t ice_sprites = load_two_sprite(path3, path3, 1 + inc_factor_w, 1 + inc_factor_h);
    // background sprites //
    if (bkgd_sprites.status == 84) {
        init_bkgd.status = 84;
        return init_bkgd;
    }
    // path sprites //
    if (path_sprites.status == 84) {
        init_bkgd.status = 84;
        return init_bkgd;
    }
    // ice sprites //
    if (ice_sprites.status == 84) {
        init_bkgd.status = 84;
        return init_bkgd;
    }
    // Background settings //
    bkgd_sprites.sprite_widths = 3642 + inc_factor_w; //3642x702
    bkgd_sprites.sprite_heights = 702 + inc_factor_h;
    // path settings //1920x219
    path_sprites.sprite_widths = 1920 + inc_factor_w;
    path_sprites.sprite_heights = 219 + inc_factor_h;
    // ice settings //
    ice_sprites.sprite_widths = 1920 + inc_factor_w;//1920x217
    ice_sprites.sprite_heights = 217 + inc_factor_h;
    // background //
    bkgd_sprites = initialise_drag_axis(bkgd_sprites, 0);
    bkgd_sprites.s2_x = bkgd_sprites.sprite_widths;
    // path //
    int bigger_indent = 132;
    path_sprites = initialise_drag_axis(path_sprites, 0);
    path_sprites.indent_level = 500 + bigger_indent;
    path_sprites.s1_y = path_sprites.indent_level;
    path_sprites.s2_x = path_sprites.sprite_widths;
    path_sprites.s2_y = path_sprites.indent_level;
    // ice //
    ice_sprites = initialise_drag_axis(ice_sprites, 0);
    ice_sprites.indent_level = path_sprites.indent_level + 145 + bigger_indent;
    ice_sprites.s1_y = ice_sprites.indent_level;
    ice_sprites.s2_x = ice_sprites.sprite_widths;
    ice_sprites.s2_y = ice_sprites.indent_level;
    init_bkgd.background1 = bkgd_sprites;
    init_bkgd.background2 = path_sprites;
    init_bkgd.background3 = ice_sprites;
    init_bkgd.status = 0;
    return init_bkgd;
}



typedef struct mouse_trac_s {
    sfVector2f sprite;
} mouse_trac_t;

typedef struct player1_s {
    sfVector2f position;
    int width;
    int height;
    int speed;
} player1_t;

int main(void)
{
    /* image_paths */
    // end image//
    char *end_image = "img/ending/interesting ending.png";
    // Background path //
    char *background_image_path = "img/background/final_background.png";
    // char *background_image_path2 = "img/background/block.jpg";
    // path path //
    char *path_image_path = "img/background/path_final.png";
    // ice path //
    char *ice_image_path = "img/background/ice_final.png";
    // silver path //
    // char *silver_path = "img/all_in_one/silver.png";
    char *silver_path = "img/all_in_one/silver.png";
    // coin //
    char *coins_path = "img/bonuses/blue ring_shrunk.png";
    // coins (spritesheet) //
    char *coins_winter_path = "img/bonuses/coin_winter_spritesheet.png";

    char *obstacle1 = "img/235-2350189_spike-sprite-clipart.jpg";
    char *obstacle2 = "img/spike-ball.png";

    sfRenderWindow *window;
    framebuffer_t *fb;
    /* Window size */
    int max_width = 1920;//1500;
    int max_height = 1080;//700;
    my_putstr("basic vars declared\n");
    /* sprite_vars */
    // end image //
    sprite_t end_sprite = load_character(end_image,
                                         initialise_sffloatrect(0, 0, 415, 401),
                                         initialise_sfintrect(0, 0, 415, 401));
    end_sprite = rescale_sprite_by_percent(end_sprite, 60, 1);
    sfTexture_setRepeated(end_sprite.texture, sfTrue);
    my_putstr("end_image sprite initialised\n");
    // enemy 1 //
    sprite_t obstacle1_sprite = load_character(obstacle1,
                                               initialise_sffloatrect(0, 0,
                                                                      374, 398),
                                               initialise_sfintrect(0, 0,
                                                                    374, 398));
    obstacle1_sprite = rescale_sprite_by_percent(obstacle1_sprite, 60, 0);
    sfTexture_setRepeated(obstacle1_sprite.texture, sfTrue);
    my_putstr("obstacle 1 sprite initialised\n");
    // enemy 2 //
    sprite_t obstacle2_sprite = load_character(obstacle2,
                                               initialise_sffloatrect(0, 0, 235,
                                                                      233),
                                               initialise_sfintrect(0, 0,
                                                                    235, 233));
    obstacle2_sprite = rescale_sprite_by_percent(obstacle2_sprite, 60, 0);
    sfTexture_setRepeated(obstacle2_sprite.texture, sfTrue);
    my_putstr("obstacle 2 sprite initialised\n");
    // character //
    sprite_t silver_sprite = load_character(silver_path,
                                            initialise_sffloatrect(0, 0, 583,
                                                                   56),
                                            initialise_sfintrect(0, 0, 29, 56));
    silver_sprite = rescale_sprite_by_percent(silver_sprite, 60, 1);
    sfTexture_setRepeated(silver_sprite.texture, sfTrue);
    my_putstr("Silver sprite initialised\n");
    // coins //
    sprite_t coins_sprite = load_character(coins_path,
                                           initialise_sffloatrect(0, 0, 293,
                                                                  345),
                                           initialise_sfintrect(0, 0, 293, 345)
    );
    coins_sprite = rescale_sprite_by_percent(coins_sprite, 60, 0);
    sfTexture_setRepeated(coins_sprite.texture, sfTrue);
    my_putstr("Coins sprite initialised\n");
    // Cois_winter //
    sprite_t coins_w_sprite = load_character(coins_winter_path,
                                             initialise_sffloatrect(0, 0, 1782,
                                                                    66),
                                             initialise_sfintrect(0, 0, 66, 66));
    coins_w_sprite = rescale_sprite_by_percent(coins_w_sprite, 60, 0);
    sfTexture_setRepeated(coins_w_sprite.texture, sfTrue);
    my_putstr("Coins winter initialised.\n");
    // event generation //
    sfEvent event;
    initialise_backgrounds_t init_bkgd = init_backgrounds(background_image_path,
                                                          path_image_path,
                                                          ice_image_path);
    /* loading the sprites */
    /* Setting the size of the images */
    /* initialising index counters */
    if (init_bkgd.status == 84) {
        return 84;
    }
    two_sprites_t bkgd_sprites = init_bkgd.background1;
    two_sprites_t path_sprites = init_bkgd.background2;
    two_sprites_t ice_sprites = init_bkgd.background3;
    my_putstr("event and backgrounds initialised\n");
    //1- Create the ressources
    window = createWindow(max_width, max_height);
    fb = framebuffer_create(max_width, max_height);
    my_putstr("window and framebuffer initialised\n");
    int score = 0;
    int characters_y = 680;
    int x = 150;
    int default_x = x;
    int y = characters_y;
    int default_y = y;
    int amount_to_add = 5;
    int image_size_w = 583;
    int image_size_h = 56;
    int ob1_x = max_width;
    int ob2_x = max_width * 2;
    int ob1_y = characters_y;
    int ob2_y = characters_y;
    int in_game = 1;
    sfKeyEvent my_keys;
    my_putstr("more basic vars initialised\n");
    /* mouse */
    mouse_trac_t mouse_sprite;
    sfVector2f mousesprite = { 0,0 };
    mouse_sprite.sprite = mousesprite;
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    player1_t my_player;
    my_player.position.x = 128;
    my_player.position.y = 128;
    my_player.width = silver_sprite.scale.x;
    my_player.height = silver_sprite.scale.y;
    my_player.speed = 150; //75

    // prepare to track time since the last frame;
    sfClock *hourglass = sfClock_create();
    sfTime delta_time = sfTime_Zero;
    unsigned long int times_counter = 0;
    int track_animation = 0;
    int track_animation_to_add = coins_w_sprite.sprite_rect.width;

    my_putstr("mouse sprite initialised\n");
    my_putstr("before while\n");
    while (sfRenderWindow_isOpen(window)) {
        delta_time = sfClock_restart(hourglass);
        sfRenderWindow_setFramerateLimit(window, 120);
        while (sfRenderWindow_pollEvent(window, &event))
        {
            /* Close window : exit */
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
                // } else if (event.type == sfKeyA) {//} && event.type == sfEvtKeyReleased) {
            // } else if (my_keys.type == sfKeyDown && event.key == sfKeyA) {
            //     my_putstr("key a was pressed\n");
            } else if (event.type == sfEvtKeyPressed) {
                // Player data
                // my_putstr("Key_pressed\n");
                if (event.key.code == sfKeyLeft && x > 0) {
                    // move player left
                    // sfSprite_setTexture(silver_sprite, texture_right, sfTrue);
                    x -= my_player.speed / 2;
                } else if (event.key.code == sfKeyRight && x < max_width - 10) {
                    // sfSprite_setTexture(silver_sprite, texture_right, sfTrue);
                    x += my_player.speed / 2;
                } else if (event.key.code == sfKeyUp && y > 50) {
                    // sfSprite_setTexture(silver_sprite, texture_right, sfTrue);
                    y -= my_player.speed / 2;
                } else if (event.key.code == sfKeyDown && y < max_height - 50) {
                    y += my_player.speed / 2;
                }
            } else if (event.type == sfEvtMouseMoved) {
                mouse_sprite.sprite.x = event.mouseMove.x;
                mouse_sprite.sprite.y = event.mouseMove.y;
                // my_putstr("In mouse\n ");
                // sfVector2i mouse = sfMouse_getPosition();
                // my_putstr("Mouse mouse_sprite.sprite.x = ");
                // my_put_nbr(mouse_sprite.sprite.x);
                // my_putstr(", mouse_sprite.sprite.y = ");
                // my_put_nbr(mouse_sprite.sprite.y);
                // my_putchar('\n');
                sfSprite_setPosition(coins_sprite.sprite, mouse_sprite.sprite);
            }
        }
        if (in_game == 1) {
            /* Check the clock */
            if (times_counter > 5) {
                if (coins_w_sprite.sprite_rect.left == coins_w_sprite.w || // - 217 ||
                    coins_w_sprite.sprite_rect.left == 0) {
                    track_animation_to_add *= -1;
                }
                coins_w_sprite.sprite_rect.left += track_animation_to_add;
                sfSprite_setTextureRect(coins_w_sprite.sprite,
                                        coins_w_sprite.sprite_rect);
                times_counter = 0;
            }
            /* Move sprites */
            // Background //
            bkgd_sprites = move_two_sprites(bkgd_sprites);
            // path //
            path_sprites = move_two_sprites(path_sprites);
            // // ice //
            ice_sprites = move_two_sprites(ice_sprites);
            // silver //
            silver_sprite = move_sprite(silver_sprite, x, y);
            // obstacle 1 //
            obstacle1_sprite = move_sprite(obstacle1_sprite, ob1_x, ob1_y);
            // obstacle 2 //
            obstacle2_sprite = move_sprite(obstacle2_sprite, ob2_x, ob2_y);
            // coin_w_sprite //
            coins_w_sprite = move_sprite(coins_w_sprite, 0, 0);
            /* Display sprites in the window */
            // background //
            draw_two_sprites(window, bkgd_sprites, NULL);
            // path //
            draw_two_sprites(window, path_sprites, NULL);
            // ice //
            draw_two_sprites(window, ice_sprites, NULL);
            // silver //
            sfRenderWindow_drawSprite(window, silver_sprite.sprite, NULL);
            sfRenderWindow_drawSprite(window, coins_sprite.sprite, NULL);
            sfRenderWindow_drawSprite(window, obstacle1_sprite.sprite, NULL);
            sfRenderWindow_drawSprite(window, obstacle2_sprite.sprite, NULL);
            sfRenderWindow_drawSprite(window, coins_w_sprite.sprite, NULL);
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
            // y++;
            printf("x = %d, y = %d, ob1_x = %d, ob1_y = %d, ob2_x = %d, ob2_y = %d\n", x, y, ob1_x, ob1_y, ob2_x, ob2_y);
            // if (x > ob1_x - obstacle1_sprite.scale.x && x < ob1_x + obstacle1_sprite.scale.x && y < ob1_y + obstacle1_sprite.scale.y && y > ob1_y - obstacle1_sprite.scale.y) {
            //     // printf("x = %d, y = %d, ob1_x = %d, ob1_y = %d, ob2_x = %d, ob2_y = %d\n", x, y, ob1_x, ob1_y, ob2_x, ob2_y);
            //     // printf("ob1_x + obstacle1_sprite.scale.x = %d, ob1_x - obstacle1_sprite.scale.x = %d, ob1_y + obstacle1_sprite.scale.y = %d, ob1_y - obstacle1_sprite.scale.y = %d\n", ob1_x + obstacle1_sprite.scale.x, ob1_x - obstacle1_sprite.scale.x, ob1_y + obstacle1_sprite.scale.y, ob1_y - obstacle1_sprite.scale.y);
            //     my_putstr("silver encountered spike\n");
            //     in_game = 0;
            // }
            // if (x > ob2_x - obstacle2_sprite.scale.x && x < ob2_x + obstacle2_sprite.scale.x && y > ob2_y - obstacle2_sprite.scale.y && y < ob2_y + obstacle2_sprite.scale.y) {
            //     // printf("x = %d, y = %d, ob1_x = %d, ob1_y = %d, ob2_x = %d, ob2_y = %d\n", x, y, ob1_x, ob1_y, ob2_x, ob2_y);
            //     // printf("ob2_x + obstacle2_sprite.scale.x = %d, ob2_x - obstacle2_sprite.scale.x = %d, ob2_y + obstacle2_sprite.scale.y = %d, ob2_y - obstacle2_sprite.scale.y = %d\n", ob2_x + obstacle2_sprite.scale.x, ob2_x - obstacle2_sprite.scale.x, ob2_y + obstacle2_sprite.scale.y, ob2_y - obstacle2_sprite.scale.y);
            //     my_putstr("silver encountered ball\n");
            //     in_game = 0;
            // }
            // if (x > ob1_x && x < ob1_x && y < ob1_y && y > ob1_y) {
            //     my_putstr("silver encountered spike\n");
            //     in_game = 0;
            // }
            // if (x > ob2_x && x < ob2_x && y > ob2_y && y < ob2_y) {
            //     my_putstr("silver encountered ball\n");
            //     in_game = 0;
            // }
            if (x == ob1_x && y == ob1_y) {
                my_putstr("silver encountered spike\n");
                in_game = 0;
            }
            if (x == ob2_x && y == ob2_y) {
                my_putstr("silver encountered ball\n");
                in_game = 0;
            }
            if (x > default_x) {
                x += -1;
            }
            if (x < default_x) {
                x += 1;
            }
            if (y > default_y) {
                y += -1;
            }
            if (y < default_y) {
                y += 1;
            }
            // x += amount_to_add;
            ob1_x += -5;
            ob2_x += -10;
            // if (x == max_width) {
            //     amount_to_add = -10;
            // }
            // if (x == 0) {
            //     amount_to_add = 5;
            // }
            if (ob1_x == 0) {
                ob1_x = max_width;
            }
            if (ob2_x == 0) {
                ob2_x = max_width * 2;
            }
            score++;
            times_counter++;
        } else {
            sfRenderWindow_setMouseCursorVisible(window, sfTrue);
            end_sprite = move_sprite(end_sprite, 560, 340);
            sfRenderWindow_drawSprite(window, end_sprite.sprite, NULL);
            sfRenderWindow_display(window);
            sfRenderWindow_clear(window, sfBlack);
        }

    }
    printf("score = %d\n", score);
    sfRenderWindow_destroy(window);
    framebuffer_destroy(fb);
    /* freeing ressources */
    // background sprites //
    free_two_sprites(bkgd_sprites);
    // path sprite //
    free_two_sprites(path_sprites);
    // ice_sprite //
    free_two_sprites(ice_sprites);
    // silver_sprite //
    free_sprite(silver_sprite);
    // coins_sprite //
    free_sprite(coins_sprite);
    free_sprite(coins_w_sprite);
}
