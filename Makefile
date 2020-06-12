
# -*- MAKEFILE -*-
SRC = srcs1/ft_isascii.c
MAIN = tests/isascii_main.c
HEADER = includes
all:
	gcc -Wall -Wextra -Werror -lbsd $(SRC) $(MAIN) -I $(HEADER)
fclean:
	rm *~ a.out
re: fclean
	all
