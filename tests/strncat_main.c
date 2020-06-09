#include <stdio.h>
char *ft_strncat(char *dest, const char *src, size_t n);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
		printf("%s", ft_strncat(argv[1], argv[2], 50));
	return (0);
}
