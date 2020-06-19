
# -*- MAKEFILE -*-
SRC =  srcs1/ft_strsplit.c srcs1/ft_strnew.c srcs1/mem/ft_bzero.c srcs1/ft_strsub.c
#SRC = srcs1/ft_putchar.c srcs1/ft_putnbr.c srcs1/ft_putstr.c  srcs1/ft_putchar_fd.c srcs1/ft_putnbr_fd.c srcs1/ft_putstr_fd.c
MAIN = tests/ft_split_main.c
HEADER = includes
all:
	gcc -Wall -Wextra -Werror -lbsd $(SRC) $(MAIN) -I $(HEADER)
fclean:
	rm *~ a.out
re: fclean
	all
