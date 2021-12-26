##
## EPITECH PROJECT, 2021
## Task01 - makefile
## File description:
## jitter jitter
##

SRC	=	create.c	\
		append.c	\
		get_value.c	\
		del_item.c	\
		free.c

SUB_SRC	=	../my/str/my_strcmp.c	\
			../my/str/my_strlen.c	\
			../my/str/my_strcpy.c	


OBJ	=	$(SRC:.c=.o)

SUB_OBJ	=	$(SUB_SRC:.c=.o)

# NAME	=	libmy_dict.a
NAME	=	libmydict.a


# MYLIB=../my/libmy.a
# MYLIB_NAME=../my/my.a

all:	$(NAME)

$(NAME):	$(OBJ) $(SUB_OBJ)
	ar rc $(NAME) $(OBJ) $(SUB_OBJ)
clean:
	rm -f $(OBJ)
	rm -f $(SUB_OBJ)
#	make -C ../my clean
fclean: clean
	rm -f $(NAME)
#	make -C ../my fclean
re:	fclean all

auteur:
	echo $(USER) > auteur