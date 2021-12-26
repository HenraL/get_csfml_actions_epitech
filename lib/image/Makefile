##
## EPITECH PROJECT, 2021
## my_screensaver - Makefile
## File description:
## jitter jitter
##

SRC	=	load.c	\
		play.c	\
		free.c


OBJ	=	$(SRC:.c=.o)

NAME	=	libmyimage.a

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