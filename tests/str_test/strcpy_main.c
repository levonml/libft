#include <stdio.h>
char *ft_strcpy(char *dest, const char *src);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
		printf("%s", ft_strcpy(argv[1] + 3, argv[1]));
	return (0);
}
