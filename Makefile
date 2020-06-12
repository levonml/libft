
# -*- MAKEFILE -*-
SRC = srcs1/ft_atoi.c
MAIN = tests/atoi_main.c
HEADER = includes
all:
	gcc -Wall -Wextra -Werror -lbsd $(SRC) $(MAIN) -I $(HEADER)
fclean:
	rm *~ a.out
re: fclean
	all
