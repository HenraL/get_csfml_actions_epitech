##
## EPITECH PROJECT, 2021
## my_screensaver - Makefile
## File description:
## jitter jitter
##

SRC	=	init.c	\
		update_pos.c	\
		show.c	\
		hide.c

# SUB_SRC = ../maths/calc_percent.c

OBJ	=	$(SRC:.c=.o)

SUB_OBJ = $(SUB_SRC:.c=.o)

NAME	=	libmymouse.a

all:	$(NAME)

$(NAME):	$(OBJ) # $(SUB_OBJ)
	ar rc $(NAME) $(OBJ) # $(SUB_OBJ)

clean:
	rm -f $(OBJ)
#	rm -f $(SUB_OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur