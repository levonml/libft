#include <stdio.h>

char *ft_strmap(char const *s, char (*f)(char));

char func(char q)
{
	q = 'l';
	return (q);
}
int main()
{
	const char *r = "123456789";
	printf("%s", ft_strmap(r, &func));
	return (0);
}
