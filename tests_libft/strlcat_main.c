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
		char dest[10] = "1234";
			char best[10] = "1234";
	  	printf("ft_strlcat = %zu\n", ft_strlcat(dest, argv[1], 9));
	  	printf("ft_dest = %s\n",dest);
		printf("strlcat = %zu\n", strlcat(best, argv[1], 9));
	  	printf("dest = %s\n",best);
	}
	return (0);
}
