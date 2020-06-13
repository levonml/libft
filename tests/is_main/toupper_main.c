#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c);

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
		printf("ft_toupper = %c\n", ft_toupper(argv[1][0]));
		printf("toupper = %c\n", toupper(argv[1][0]));
	}
	return (0);
}
