
# -*- MAKEFILE -*-
SRC = srcs1/ft_strnew.c srcs1/ft_strsub.c srcs1/mem/ft_bzero.c
MAIN = tests/ft_strsub_main.c
HEADER = includes
all:
	gcc -Wall -Wextra -Werror -lbsd $(SRC) $(MAIN) -I $(HEADER)
fclean:
	rm *~ a.out
re: fclean
	all
