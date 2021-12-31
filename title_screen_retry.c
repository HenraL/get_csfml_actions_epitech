/*
** EPITECH PROJECT, 2021
** get_csfml_keys - title_screen_retry.c
** File description:
** jitter jitter
*/

#include <stdlib.h>
#include "include/my_window.h"
#include "include/my_lib.h"
#include "include/my_maths.h"
#include "include/my_sprite.h"
#include "include/my_mouse.h"
#include "include/my_text.h"
#include "include/my_silvers.h"
#include "include/my_event.h"
// #include <SFML/Window/Cursor.h>
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


int launch_game(void) {
    char *button_path = "img/title_screen/bluebutton.png";
    // Background path //
    char *background_image_path = "img/background/final_background.png";
    // char *background_image_path2 = "img/background/block.jpg";
    // path path //
    char *path_image_path = "img/background/path_final.png";
    // ice path //
    char *ice_image_path = "img/background/ice_final.png";
    // silver path //
    char *silver_s_path = "img/sprite/silver/silver_running_very_slow.png";
    char *silver_n_path = "img/sprite/silver/silver_running_slow.png";
    char *silver_f_path = "img/sprite/silver/silver_running_fast.png";
    // end sprites //
    char *end_sprite_won_path = "img/ending/eggman_end.png";
    char *end_sprite_lost_path = "img/ending/silver_loading.png";
    // coin //
    char *coins_path = "img/bonuses/blue ring_shrunk.png";
    // coins (spritesheet) //
    char *coins_winter_path = "img/bonuses/coin_winter_spritesheet.png";

    char *obstacle1_path = "img/235-2350189_spike-sprite-clipart.jpg";
    char *obstacle2_path = "img/spike-ball.png";
    my_putstr("Vars initialised\n");
    return 0;
}

int main(int argc, char **argv) {
    if (argc == 1) {
        return launch_game();
    }
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        my_putstr("In help\n");
    } else if (argc > 2 || (argv[1][0] == '-' && argv[1][1] == 'h')) {
        my_putstr("Do a deeper annalyssis\n");
    }
}