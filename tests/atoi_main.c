#include <stdio.h>
#include <stdlib.h>
int ft_atoi(const char *ptr);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
		printf("ft_atoi = %d\n", ft_atoi(argv[1]));
	printf("atoi = %d\n", atoi(argv[1]));
	return (0);
}
