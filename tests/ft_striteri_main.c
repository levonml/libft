#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char *));

void func(unsigned int i, char *q)
{
	printf("%d = %s\n", i, q);
}
int main()
{
	char *r = "hello";
	ft_striteri(r, &func);
	return (0);
}
