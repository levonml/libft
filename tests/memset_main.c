#include <stdio.h>
void	*ft_memset(char *s, int c, size_t n);

int main(int argc, char **argv)
{

	int n;
	int i;

	if (argc == 1)
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
	ft_memset(argv[1], argv[2][0], n );
	printf("%s\n", argv[1]);
	}
	return(0);
}
