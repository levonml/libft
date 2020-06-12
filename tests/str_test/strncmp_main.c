#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		printf("ft_strncmp = %d\n", ft_strncmp(argv[1], argv[2],4));
  		printf("strnstr = %d\n", strncmp(argv[1], argv[2], 4));
	}
	return (0);
}
