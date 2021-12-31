/*
** EPITECH PROJECT, 2021
** runner - my_sprite.h
** File description:
** jitter jitter
*/

#ifndef MY_SPRITE_H_
#define MY_SPRITE_H_

#include <SFML/Config.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/RenderStates.h>
#include <SFML/Graphics.h>
#include "my_maths.h"
#include "my_window.h"

typedef struct anim_s {
    int max_w;
    int max_h;
    int step_w;
    int step_h;
    int max_ticks;
    int wrap;
    int counter_reset;
} anim_t;

typedef struct sprite_s {
    sfSprite *sprite;
    sfTexture *texture;
    anim_t anim;
    sfVector2f position;
    sfVector2f scale;
    sfIntRect sprite_rect;
    float previous_scale_x;
    float previous_scale_y;
    int w;
    int h;
    int x;
    int y;
    int y_step;
    int x_step;
    int status;
} sprite_t;

typedef struct two_sprites_s {
    sprite_t sprite1;
    sprite_t sprite2;
    int sprite_widths;
    int sprite_heights;
    int indent_level;
    int s1_x;
    int s1_y;
    int s2_x;
    int s2_y;
    int status;
} two_sprites_t;
typedef struct smoothing_tracker_s {
    int nb_loops;
    int global_speed;
    int smoother;
    sprite_t silver;
} smoothing_tracker_t;

sprite_t load_sprite(char *image_path);
two_sprites_t load_two_sprite(char *path1, char *path2, float w, float h);
sprite_t load_character(char *image_path, sfFloatRect char_rect, sfIntRect dim);
sprite_t load_n_size(char *path, sfFloatRect sheet_rect,
                     sfIntRect char_rect, sfVector2f rescale);
sprite_t dup_sprite(const sprite_t source_sprite);
two_sprites_t initialise_drag_axis(two_sprites_t sprites, int value);
sfIntRect initialise_sfintrect(int left, int top, int width, int height);
sfFloatRect initialise_sffloatrect(float left, float top, float width,
                                   float height);
anim_t init_anim(sfFloatRect sheet_rect, sfIntRect char_rect);
void display_sprite(sfRenderWindow *window, sprite_t image,
                    sfRenderStates *state);
sprite_t rescale_sprite(sprite_t default_sprite, float new_x, float new_y);
sprite_t rescale_sprite_by_percent(sprite_t default_sprite, float fact, int up);
sprite_t move_sprite(sprite_t default_sprite, int x, int y);
sprite_t move_sprite_with_s_x_n_y(sprite_t default_sprite);
sprite_t next_frame(sprite_t default_sprite, int time);
two_sprites_t move_two_sprites(two_sprites_t sprites);
two_sprites_t is_reset_drag_needed(two_sprites_t sprites, int max_width);
int is_it_y_or_both(int x_coliding, int y_coliding);
smoothing_tracker_t is_smoothing_time_overflow(smoothing_tracker_t is_it);
int is_sprite_coliding(sprite_t sprite1, sprite_t sprite2);
void draw_two_sprites(sfRenderWindow *window, two_sprites_t sprites,
                      sfRenderStates *states);
two_sprites_t change_two_val(two_sprites_t sprites, int up_or_down, int nb);
sprite_t override_sprite(sprite_t old, sprite_t new_sp);
void free_sprite(sprite_t default_sprite);
void free_two_sprites(two_sprites_t sprites);
#endif