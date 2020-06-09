#include <stdio.h>
int		ft_memcmp(const char *s1, const char *s2, size_t n);

int 	main(int argc, char **argv)
{

	int n;
	int i;

	if (argc < 3)
	{
		printf("arguments missing\n");
		return(1);
	}
	else
	{
	i = 0;
	n = 0;
   	while(argv[3][i])
	{
		n = 10 * n + argv[3][i] - 48;
		i++;
	}

	printf("%d\n", 	ft_memcmp(argv[1], argv[2], n ));
	}
	return(0);
}
