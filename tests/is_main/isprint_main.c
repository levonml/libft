#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		//	printf("ft_isascii = %d\n", ft_isascii(argv[1][0]));
		printf("ft_isprint = %d\n", ft_isprint(argv[1][0]));
		printf("isprint = %d\n", isprint(argv[1][0]));
	}
	return (0);
}
