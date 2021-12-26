/*
** EPITECH PROJECT, 2021
** my_screensaver - char_star_to_int_long.c
** File description:
** jitter jitter
*/

#include "../../include/my_lib.h"
#include "../../include/my_maths.h"

int char_star_to_nb(char *str)
{
    int result = 0;
    int str_length = my_strlen(str);
    char *rev_str = my_revstr(str);
    int i = 0;
    for (; i < str_length; i++) {
        result += ((rev_str[i] - '0') * exponential(10, i));
    }
    return result;
}

int char_star_to_int(char *digits)
{
    int i = 0;
    int res = 0;
    int exp_res = 0;
    int len_digits = my_strlen(digits);
    for (;len_digits > i; i++) {
        exp_res = exponential(10, (len_digits - i) - 1);
        res += (((int)digits[i] - '0') * exp_res);
    }
    return res;
}

int cstnb(char *str)
{
    int result = char_star_to_int(str);
    return result;
}
