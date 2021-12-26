##
## EPITECH PROJECT, 2021
## Task01 - makefile
## File description:
## jitter jitter
##

SRC	=	display_help.c	\
		help_prog_options.c	\
		help_speed.c	\
		help_in_general.c	\
		help_rgba.c

SUB_SRC	=	../my/put/my_putstr.c	\
			../my/put/my_putchar.c	\
			../my/put/my_put_nbr.c

OBJ	=	$(SRC:.c=.o)

SUB_OBJ	=	$(SUB_SRC:.c=.o)

NAME	=	libmyhelp.a


all:	$(NAME)

$(NAME):	$(OBJ) $(SUB_OBJ)
	ar rc $(NAME) $(OBJ) $(SUB_OBJ)
clean:
	rm -f $(OBJ)
	rm -f $(SUB_OBJ)

fclean: clean
	rm -f $(NAME)


re:	fclean all

auteur:
	echo $(USER) > auteur