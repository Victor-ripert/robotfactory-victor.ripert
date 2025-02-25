##
## EPITECH PROJECT, 2024
## Makefile for setting_up
## File description:
## Makefile for setting_up
##


SRC =	part1/step1.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	= -Wall -Wextra -g3

NAME	= write-some-text

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)
	mv $(NAME) part1/step1

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
