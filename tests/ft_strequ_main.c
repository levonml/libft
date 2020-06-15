#include <stdio.h>
int		ft_strequ(const char *s1, const char *s2);

int 	main(int argc, char **argv)
{

	if (argc < 2)
	{
		printf("arguments missing\n");
		return(1);
	}
	else
	{
	printf("%d\n", 	ft_strequ(argv[1], argv[2]));
	}
	return(0);
}
