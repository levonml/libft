#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
		printf("ft_isdigit = %d\n", ft_isalnum(argv[1][0]));
	printf("isdigit = %d\n", isalnum(argv[1][0]));
	return (0);
}
