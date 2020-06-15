#include <stdio.h>

char *ft_strsub(char *s, unsigned char start, size_t n);
int main()
{
	printf("ft_strsub = %s", ft_strsub("absdefghijklmnopqrstuvwxyz", 5, 25));
	return (0);
}
