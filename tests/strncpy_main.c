#include <stdio.h>
char *ft_strncpy(char *dest, const char *src, size_t n);

int main(void)
{
	char d[] = "123456";
	char s[] = "abc";

	printf("%s", ft_strncpy(d, s, 4));
	return (0);
}
