/*
** EPITECH PROJECT, 2021
** runner - create.c
** File description:
** jitter jitter
*/

#include "../../include/my_event.h"
#include "../../include/my_lib.h"

/*event_t on_event(event_t event, event_to_listen_t e_t_l)
{

}*/

// event_to_listen_t on_listened_event(event_to_listen_t events, sfEvent event)
// {
//     my_put_nbr(event.key.code);
//     // my_putstr(event.key.code);
//     my_putchar('\n');
//     return events;
// }

void display_key_code(sfEvent event)
{
    if (event.key.type != 11 || event.key.type != 10) {
        my_putchar(event.key.code);
        my_putchar('=');
        my_put_nbr(event.key.type);
        // my_putchar(event.key.code);
        // my_put_nbr(event.type);
        my_putchar('\n');
    }
}