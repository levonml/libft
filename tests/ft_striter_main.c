#include <stdio.h>

void ft_striter(char *s, void (*f)(char *));

void func(char *q)
{
	printf("%s\n", q);
}
int main()
{
	char *r = "hello";
	ft_striter(r, &func);
	return (0);
}
