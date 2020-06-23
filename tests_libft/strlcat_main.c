#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>
//#include <stdlib.h>
//#include <string.h>

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
		//	printf("strlcat = %zu\n", strlcat(argv[1], argv[2], 5));
	}
	return (0);
}
