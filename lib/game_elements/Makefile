##
## EPITECH PROJECT, 2021
## my_runner - Makefile
## File description:
## jitter jitter
##

SRC	=	load_an_asset.c	\
		load_4_assets.c	\
		assing_dim_for_an_asset.c	\
		assing_dimensions_for_4_assets.c	\
		free_an_asset.c	\
		free_4_assets.c

SUB_SRC	=	../sprite/load.c	\
			../sprite/rescale.c

OBJ	=	$(SRC:.c=.o)

SUB_OBJ = $(SUB_SRC:.c=.o)

NAME	=	libmyassets.a

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