##
## EPITECH PROJECT, 2021
## my_screensaver - Makefile
## File description:
## jitter jitter
##

SRC	=	create_framebuffer.c	\
		createWindow.c	\
		destroy_framebuffer.c


OBJ	=	$(SRC:.c=.o)

# SUB_OBJ	=	$(SUB_SRC:.c=.o)

NAME	=	libmywindow.a

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