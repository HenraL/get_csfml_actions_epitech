# Build of a default window

# include:

> __\#include <SFML/Audio.h>__ // include the audio library \
__\#include <SFML/Graphics.h>__ // include the graphics library \
__\#include <stdlib.h>__ // include the error management library

# The main function 

> __int main()__ // declaire the main function \
__{__
# The vars

> __char *image_path = "img/sprite_test.png";__ // set the path for the image \
__char *font_path = "html/font/css/fonts/s_f_f_d/NiseSegaSonic.ttf";__ // set the path for the font \
__char *music_path = "ogg/facebook_pop.ogg";__ //se the path for the sound \

> __sfVideoMode mode = { 800, 600, 32 };__ // set the window size and bits per pixel \
__sfRenderWindow *window;__ // render a window \
__sfTexture *texture;__ // render a texture \
__sfSprite *sprite;__ // render a sprite \
__sfFont *font;__ // render a font \
__sfText *text;__ // render a text \
__sfMusic *music;__ //render music \
__sfEvent event;__ // render an event 

# Create the main window

> __window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);__ //store the rendered window in a var

> __if (!window) {__ //if render failed\
    __return EXIT_FAILURE;__ //exit with failiur\
__}__

# Load a sprite to display
> __texture = sfTexture_createFromFile(image_path, NULL);__ //initialise the image \
__if (!texture) {__ //if initialisation failed \
    __return EXIT_FAILURE;__ //exit with an error \
__}__ \
__sprite = sfSprite_create();__ //otherwise, initialise the sprite \
__sfSprite_setTexture(sprite, texture, sfTrue);__ //attach the image (texture) to the sprite

# Create a graphical text to display
> __font = sfFont_createFromFile(font_path);__ //Load font \
__if (!font) {__ //if loading failed, \
    __return EXIT_FAILURE;__ //exit with an error \
__}__ \
__text = sfText_create();__ // Create the text var\
__sfText_setString(text, "Hello CSFML");__ //attach the string to the text \
__sfText_setFont(text, font);__ //apply specifications via the font \
__sfText_setCharacterSize(text, 50);__ // set the size

# Load a music to play
> __music = sfMusic_createFromFile(music_path);__ //load the music\
__if (!music) {__ //if loading failed \
    __return EXIT_FAILURE;__ //exit with an error \
__}__

# Play the music
> __sfMusic_play(music);__// play the loaded music

# Start the game loop
> __while (sfRenderWindow_isOpen(window))__ //while the windows is open\
__{__ \

# Process events
> __while (sfRenderWindow_pollEvent(window, &e \vent))__ //as long as there is something in event \
    __{__

# Close window : exit
> __if (event.type == sfEvtClosed)__ //if close signal detected \
__sfRenderWindow_close(window);__ //close the window \
    __}__
# Clear the screen
>    __sfRenderWindow_clear(window, sfBlack);__ 
# Draw the sprite
>    __sfRenderWindow_drawSprite(window, sprite,  \NULL);__
# Draw the text
>    __sfRenderWindow_drawText(window, text, NULL );__
# Update the window
>    __sfRenderWindow_display(window);__ \
__}__
# Cleanup resources
> __sfMusic_destroy(music);__ //free the music variable \
__sfText_destroy(text);__ // free the text variable \
__sfFont_destroy(font);__ //free the font variable\
__sfSprite_destroy(sprite);__ //free the sprite variable\
__sfTexture_destroy(texture);__ //free the texture variable\
__sfRenderWindow_destroy(window);__ //destroy the window\
__return EXIT_SUCCESS;__ //return 0\
__}__

.