
# -*- MAKEFILE -*-
SRC = srcs1/ft_striter.c
MAIN = tests/ft_striter_main.c
HEADER = includes
all:
	gcc -Wall -Wextra -Werror -lbsd $(SRC) $(MAIN) -I $(HEADER)
fclean:
	rm *~ a.out
re: fclean
	all
