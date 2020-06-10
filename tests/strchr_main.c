#include <stdio.h>
//#include "libft.h"
//#include <bsd/string.h>
//#include <stdlib.h>
//#include <string.h>
char *ft_strrchr(const char *src, int c);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		printf("ft_strchr = %s\n", ft_strrchr(argv[1], argv[2][0]));
		//		printf("dest = %s\n", argv[1]);
	}
	return (0);
}
