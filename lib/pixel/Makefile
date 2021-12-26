##
## EPITECH PROJECT, 2021
## Task01 - makefile
## File description:
## jitter jitterter jitter
##

SRC	=	add_pixel.c	\
		append_pixel_to_array.c	\
		create_pixel_array.c	\
		destroy_pixel_array.c

SUB_SRC	=	../my/str/my_strcmp.c	\
			../my/str/my_strlen.c	\
			../my/str/my_strcpy.c	


OBJ	=	$(SRC:.c=.o)

SUB_OBJ	=	$(SUB_SRC:.c=.o)

NAME	=	libmypixel.a


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