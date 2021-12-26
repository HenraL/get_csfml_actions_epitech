##
## EPITECH PROJECT, 2021
## my_screensaver - Makefile
## File description:
## jitter jitter
##

SRC	=	load_music.c	\
		play_music.c	\
		free_music.c


OBJ	=	$(SRC:.c=.o)

NAME	=	libmyaudio.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur