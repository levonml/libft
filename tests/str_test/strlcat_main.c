#include <stdio.h>
#include "libft.h"
//#include <bsd/string.h>
//#include <stdlib.h>
//#include <string.h>
size_t ft_strlcat(char *dest, const char *src, size_t n);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		printf("ft_strlcat = %zu\n", ft_strlcat(argv[1], argv[2], 5));
	  		printf("dest = %s\n", argv[1]);
	}
	return (0);
}
