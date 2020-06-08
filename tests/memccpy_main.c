#include <stdio.h>
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

int 	main()
{
	char d[] = "12";
    char s[] = "acaraaas";

	void *v;

	v = ft_memccpy(d, s, 'c', 5);
	if (v != NULL)
		printf("%s\n", (char*)v);
	else
		printf("%p\n", v);
	return (0);
}
