/*
** EPITECH PROJECT, 2021
** get_csfml_actions_epitech - calc_percent.c
** File description:
** jitter jitter
*/

float calc_percent(float factor, float nb, int up_or_down)
{
    float final_result;
    float resulting_percentage_factor = ((factor / 100) * nb);
    if (up_or_down == 1) {
        final_result = nb + resulting_percentage_factor;
    } else {
        final_result = nb - resulting_percentage_factor;
    }
    return final_result;
}