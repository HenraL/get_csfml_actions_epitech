##
## EPITECH PROJECT, 2021
## Task01 - makefile
## File description:
## jitter jitter
##

SRC	=	exponential.c	\
		sleep.c

SUB_SRC	=	../my/is/my_is_num.c

OBJ	=	$(SRC:.c=.o)

SUB_OBJ	=	$(SUB_SRC:.c=.o)

NAME	=	libmymaths.a


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