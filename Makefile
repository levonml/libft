
# -*- MAKEFILE -*-
SRC = srcs1/ft_strequ.c srcs1/str/ft_strcmp.c
MAIN = tests/ft_strequ_main.c
HEADER = includes
all:
	gcc -Wall -Wextra -Werror -lbsd $(SRC) $(MAIN) -I $(HEADER)
fclean:
	rm *~ a.out
re: fclean
	all
