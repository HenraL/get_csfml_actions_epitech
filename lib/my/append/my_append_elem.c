/*
** EPITECH PROJECT, 2021
** bsq_boostrap - my_get_content.c
** File description:
** abc
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include "../../../include/my_lib.h"

int my_append_elem(char const *filepath, char *str) {
    int result = open(filepath, O_APPEND);
    if (result != -1 || my_strlen(str) > 0) {
        write(result, str, my_strlen(str));
        close(result);
        return 1;
    } else if (my_strlen(str) < 1) {
        return 0;
    } else {
        return (-1);
    }
}
