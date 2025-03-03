##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## make
##

SRC = main.c	\
	src/my_exec.c	\
	src/shell_loop.c	\
	src/check_command.c	\
	src/verify_path.c	\
	src/search_env.c	\
	src/replace_env.c	\
	src/my_free.c	\
	src/create_new_var.c	\
	src/word_array/my_str_to_word_array.c	\
	src/word_array/my_word_len.c	\
	src/word_array/find_array_len.c	\
	src/word_array/array_cpy.c	\
	src/word_array/array_append.c	\
	src/word_array/free_array.c	\
	src/word_array/array_supelem.c	\
	src/word_array/array_display.c	\
	src/str/my_putchar.c	\
	src/str/my_putstr.c	\
	src/str/my_put_nbr.c	\
	src/str/error/my_puterror.c	\
	src/str/error/my_putstrerror.c	\
	src/str/error/my_put_nbr_error.c	\
	src/str/my_strdup.c	\
	src/str/my_strlen.c	\
	src/str/my_strcmp.c	\
	src/str/my_strcat.c	\
	src/str/my_minus.c	\
	src/str/my_strcut.c	\
	src/str/my_minus_last.c	\
	src/str/my_clear_str.c	\
	src/str/my_minus_ptr.c	\
	src/command/my_env.c	\
	src/command/my_setenv.c	\
	src/command/my_unsetenv.c	\
	src/command/my_cd.c

NAME	=	mysh

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
