##
## EPITECH PROJECT, 2021
## my_screensaver - Makefile
## File description:
## jitter jitter
##

SRC	=	test2.c

LIB	=	-L my/ -lmy	\
		-L dict/ -lmydict	\
		-L convert -lmyconvert	\
		-L window -lmywindow	\
		-L maths -lmymaths	\
		-L help -lmyhelp	\
		-L audio -lmyaudio	\
		-L sprite -lmysprite	\
		-L event -lmyevents


OBJ	=	$(SRC:.c=.o)

NAME	=	test.out
all:	$(NAME)
$(NAME):	$(OBJ)
	make -C audio
	make -C convert
	make -C dict
	make -C event
	make -C maths
	make -C help
	make -C my
	make -C sprite
	make -C window
	gcc $(SRC) -o $(NAME) -lcsfml-graphics -lcsfml-system -lcsfml-audio $(LIB)

clean:
	rm -f $(OBJ)
	make -C audio clean
	make -C convert clean
	make -C dict clean
	make -C event clean
	make -C maths clean
	make -C help clean
	make -C my clean
	make -C sprite clean
	make -C window clean
fclean: clean
	rm -f $(NAME)
	make -C audio fclean
	make -C convert fclean
	make -C dict fclean
	make -C event fclean
	make -C help fclean
	make -C maths fclean
	make -C my fclean
	make -C sprite fclean
	make -C window fclean


re:	fclean all

auteur:
	echo $(USER) > auteur
