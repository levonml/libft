#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

char func(unsigned int i, char q)
{
	
	q = q + i;
	return (q);
}
int main()
{
	const char *r = "123456789";
	printf("%s", ft_strmapi(r, &func));
	return (0);
}
