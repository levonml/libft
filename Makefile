
# -*- MAKEFILE -*-
#SRC = srcs1/ft_putchar_fd.c srcs1/ft_putnbr_fd.c srcs1/ft_putstr_fd.c
SRC = srcs1/ft_putchar.c srcs1/ft_putnbr.c srcs1/ft_putstr.c  srcs1/ft_putchar_fd.c srcs1/ft_putnbr_fd.c srcs1/ft_putstr_fd.c
MAIN = tests/ft_putnbr_main.c
HEADER = includes
all:
	gcc -Wall -Wextra -Werror -lbsd $(SRC) $(MAIN) -I $(HEADER)
fclean:
	rm *~ a.out
re: fclean
	all
