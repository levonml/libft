#include <stdio.h>
#include <string.h>
//char *ft_strcat(char *dest, const char *src);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
		//		printf("%s", ft_strcat(argv[1], argv[2]));
				printf("%s", strcat(argv[1], argv[2]));
	return (0);
}
