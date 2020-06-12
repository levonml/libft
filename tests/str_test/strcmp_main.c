#include <stdio.h>
#include <string.h>

int ft_strcmp(const char *s1, const char *s2);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		printf("ft_strcmp = %d\n", ft_strcmp(argv[1], argv[2]));
  		printf("strstr = %d\n", strcmp(argv[1], argv[2]));
	}
	return (0);
}
