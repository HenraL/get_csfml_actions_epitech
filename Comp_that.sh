##
## EPITECH PROJECT, 2021
## get_csfml_actions_epitech
## File description:
## Comp_that.sh
##

make re
# ./my_runner
# ./title_screen
if [ $# -gt 0 ] 
then
    ./title_screen_retry -h
else
    ./title_screen_retry
fi
