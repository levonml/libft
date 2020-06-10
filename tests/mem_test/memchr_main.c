#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n);

int 	main()
{
    char s[] = "aarcaacas";

	void *v;

	v = ft_memchr(s, 'c', 5);
	if (v != NULL)
		printf("%s\n", (char*)v);
	else
		printf("%p\n", v);
	return (0);
}
