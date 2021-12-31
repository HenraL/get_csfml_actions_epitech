##
## EPITECH PROJECT, 2021
## my_screensaver - Makefile
## File description:
## jitter jitter
##

SRC	=	init.c	\
		init_4_vals.c	\
		rgba.c	\
		set_colors.c	\
		set_more_info.c	\
		move.c	\
		move_from_struct_coordinates.c	\
		positioning.c	\
		update.c	\
		free.c


OBJ	=	$(SRC:.c=.o)

# SUB_OBJ	=	$(SUB_SRC:.c=.o)

NAME	=	libmytext.a

all:	$(NAME)

$(NAME):	$(OBJ)# $(SUB_OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f $(SUB_OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur