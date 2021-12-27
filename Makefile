##
## EPITECH PROJECT, 2021
## Bootstrap - Makefile
## File description:
## jitter jitter
##


SRC	=	main.c
SRC	=	display_sprite.c
SRC	=	play_sound.c
SRC	=	get_events.c
SRC	=	display_sprite_animation.c
SRC	=	display_sprite_animation_cleaned.c

OBJ	=	$(SRC:.c=.o)

NAME = my_runner

LIB	=	-L lib/my/ -lmy	\
		-L lib/window -lmywindow	\
		-L lib/sprite -lmysprite


all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/event
	make -C lib/my
	make -C lib/window
	make -C lib/sprite
	gcc $(SRC) -o $(NAME) -lcsfml-graphics -lcsfml-system -lcsfml-audio $(LIB)

clean:
	rm -f $(OBJ)
	make -C lib/event clean
	make -C lib/my clean
	make -C lib/window clean
	make -C lib/sprite clean

fclean: clean
	rm -f $(NAME)
	make -C lib/event fclean
	make -C lib/my fclean
	make -C lib/window fclean
	make -C lib/sprite fclean

re:	fclean all

auteur:
	echo $(USER) > auteur