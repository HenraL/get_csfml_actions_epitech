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
SRC	=	animate_person.c
SRC	=	title_screen.c

OBJ	=	$(SRC:.c=.o)

# NAME = my_runner
NAME = title_screen

LIB	=	-L lib/my/ -lmy	\
		-L lib/sprite -lmysprite	\
		-L lib/mouse -lmymouse	\
		-L lib/window -lmywindow	\
		-L lib/event -lmyevents	\
		-L lib/silvers -lmysilvers	\
		-L lib/text -lmytext

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/event
	make -C lib/my
	make -C lib/window
	make -C lib/sprite
	make -C lib/mouse
	make -C lib/silvers
	make -C lib/text
	gcc -g $(SRC) -o $(NAME) -lcsfml-graphics -lcsfml-system -lcsfml-audio $(LIB)

clean:
	rm -f $(OBJ)
	make -C lib/event clean
	make -C lib/my clean
	make -C lib/window clean
	make -C lib/sprite clean
	make -C lib/mouse clean
	make -C lib/silvers clean
	make -C lib/text clean

fclean: clean
	rm -f $(NAME)
	make -C lib/event fclean
	make -C lib/my fclean
	make -C lib/window fclean
	make -C lib/sprite fclean
	make -C lib/mouse fclean
	make -C lib/silvers fclean
	make -C lib/text fclean

re:	fclean all

auteur:
	echo $(USER) > auteur