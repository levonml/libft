#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c);

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
		printf("ft_tolower = %c\n", ft_tolower(argv[1][0]));
		printf("tolower = %c\n", tolower(argv[1][0]));
	}
	return (0);
}
