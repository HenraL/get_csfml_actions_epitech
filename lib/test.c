/*
** EPITECH PROJECT, 2021
** runner - test.c
** File description:
** jitter jitter
*/

#include "../include/my_window.h"
#include "../include/my_audio.h"
#include "../include/my_sprite.h"
#include "../include/my_event.h"
#include "../include/my_lib.h"
// #include "../include/my_"
#include <stdlib.h>
// #include <SFML/Audio.h>
// #include <SFML/Graphics.h>

int main(void)
{
    music_status_t music1;
    music_status_t music2;
    sprite_t sprite1;
    event_to_listen_t etl;
    sfEvent event1;
    sfEvent event;
    sprite1.path = "../img/sprite_test.png";
    char *font_path = "../html/font/css/fonts/Algerian Regular/Algerian Regular.ttf";//s_f_f_d/NiseSegaSonic.ttf";
    music1.path = "../ogg/facebook_pop.ogg";
    music2.path = "../ogg/Volksmusik-Tiroler-Echo-medley.ogg";
    sfVideoMode mode = { 1300, 600, 32 };
    sfRenderWindow *window;
    // sfTexture *texture;
    sfFont *font;
    sfText *text;
    /* Create the main window */
    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
    /* Load a sprite to display */
    sprite1 = create_sprite(sprite1);
    if (sprite1.status == 84)
        return EXIT_FAILURE;

    /* Create a graphical text to display */
    font = sfFont_createFromFile(font_path);
    if (!font)
        return EXIT_FAILURE;
    text = sfText_create();
    sfText_setString(text, "Hello CSFML");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    /* Load a music to play */
    music1 = load_music(music1);
    music2 = load_music(music2);
    if (music1.status == 84 || music2.status == 84) {
        return 84;
    }
    /* Play the music */
    play_loaded_music(music1);
    play_loaded_music(music2);
    /* Start the game loop */
    while (sfRenderWindow_isOpen(window))
    {

        event1 = event;
        /* Process events */
        while (sfRenderWindow_pollEvent(window, &event)) {
            /* Close window : exit */
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        // etl = initialise_events(etl);
        // etl = on_listened_event(etl, event1);
        while (sfRenderWindow_pollEvent(window, &event1)) {
            display_key_code(event1);
        }
        /* Clear the screen */
        sfRenderWindow_clear(window, sfBlack);
        /* Draw the sprite */
        display_sprite(window, sprite1, NULL);
        /* Draw the text */
        sfRenderWindow_drawText(window, text, NULL);
        /* Update the window */
        sfRenderWindow_display(window);
    }
    /* Cleanup resources */
    free_music(music1);
    free_music(music2);
    sfText_destroy(text);
    sfFont_destroy(font);
    free_sprite(sprite1);
    sfRenderWindow_destroy(window);
    return EXIT_SUCCESS;
    // return 0;
}