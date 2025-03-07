##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## make
##

SRC = src/parse_header.c \

NAME	=	asm

OBJ	=	$(SRC:.c=.o)

DEBUG_VALGRIND += -g3 -ggdb3 -iquote ./include

CPPFLAGS += -g3 -ggdb3 -iquote ./include -Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

debug: fclean $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(DEBUG_VALGRIND)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean  all

coding_style: fclean
	clear && ../../coding-style.sh .
	cat coding-style-reports.log
	@rm -f coding-style-reports.log

.PHONY: all clean fclean re coding_style debug
