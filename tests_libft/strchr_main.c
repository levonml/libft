#include <stdio.h>
#include "libft.h"
//#include <bsd/string.h>
//#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		printf("ft_strchr = %s\n", ft_strchr(argv[1], argv[2][0]));
		printf("strchr = %s\n", strchr(argv[1], argv[2][0]));
	}
	return (0);
}
