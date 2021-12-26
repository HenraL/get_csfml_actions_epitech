/*
** EPITECH PROJECT, 2021
** my_screensaver - sleep.c
** File description:
** jitter jitter
*/

#include <SFML/System/Clock.h>
// #include <SFML/System/Export.h>
// #include <SFML/System/Time.h>
// #include <SFML/System/Types.h>
#include <stdio.h>
#include "../../include/structs.h"
#include "../../include/my_lib.h"
#include "../../include/my_maths.h"

void my_fsleep(char *tIme)
{
}

void my_sleep(unsigned int time)
{
    sfClock *elapsed_time = sfClock_create();
    sfTime current_time;
    current_time = sfClock_getElapsedTime(elapsed_time);
    while ((unsigned int)current_time.microseconds < (unsigned int)time) {
        current_time = sfClock_getElapsedTime(elapsed_time);
    }
    sfClock_destroy(elapsed_time);

}
