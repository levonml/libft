#include <stdio.h>
#include <string.h>

int ft_strnequ(const char *s1, const char *s2, size_t n);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		printf("ft_strnequ = %d\n", ft_strnequ(argv[1], argv[2],4));
 	}
	return (0);
}
