#include <stdio.h>
//#include "libft.h"
//#include <bsd/string.h>
//#include <stdlib.h>
#include <string.h>

char *ft_strstr(const char *haystack, const char *needle);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		printf("ft_strstr = %s\n", ft_strstr(argv[1], argv[2]));
   		printf("strstr = %s\n", strstr(argv[1], argv[2]));
	}
	return (0);
}
