##
## EPITECH PROJECT, 2021
## Task01 - makefile
## File description:
## jitter jitter
##

SRC	=	char_star_to_nb.c	\
		char_to_int.c	\
		int_to_char.c	\
		nb_to_char_star.c	\
		my_get_args_for_prog.c

SUB_SRC	=	../maths/exponential.c	\
			../my/is/my_str_isnum.c	\
			../my/is/my_is_num.c	\
			../my/str/my_revstr.c	\
			../my/str/my_strlen.c	\
			../my/str/my_strcpy.c


OBJ	=	$(SRC:.c=.o)

SUB_OBJ	=	$(SUB_SRC:.c=.o)

NAME	=	libmyconvert.a

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