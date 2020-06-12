#include <stdio.h>
//#include "libft.h"
#include <bsd/string.h>
//#include <stdlib.h>
//#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t len);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		printf("ft_strnstr = %s\n", ft_strnstr(argv[1], argv[2], 4));
					printf("strnstr = %s\n", strnstr(argv[1], argv[2], 4));
	}
	return (0);
}
