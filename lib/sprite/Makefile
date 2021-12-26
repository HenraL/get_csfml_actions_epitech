##
## EPITECH PROJECT, 2021
## my_screensaver - Makefile
## File description:
## jitter jitter
##

SRC	=	create.c	\
		display.c	\
		free.c
#		moove.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmysprite.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f $(SUB_OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur