#include <stdio.h>
void	ft_bzero(char *s,  size_t n);

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("arguments are missing\n");
		return(1);
	}
	else
	{
	int n;
	int i;

	i = 0;
	n = 0;
   	while(argv[2][i])
	{
		n = 10 * n + argv[2][i] - 48;
		i++;
	}
	ft_bzero(argv[1], n );
	printf("%c\n", argv[1][5]);
	}
	return(0);
}
