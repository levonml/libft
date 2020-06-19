#include <stdio.h>

char *ft_strsub(char *s, unsigned char start, size_t n);
int main()
{
	printf("ft_strsub = %s", ft_strsub("abcdefghijklmnopqrstuvwxyz", 0, 3));
	return (0);
}
