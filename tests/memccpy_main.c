#include <stdio.h>
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

int 	main()
{
	char d[] = "1234567";
    char s[] = "aacraaas";

	if( ft_memccpy(d, s, 'c', 5) == NULL)
		printf("%p\n", ft_memccpy(d, s, 'c', 5));
	else
		printf("%s\n", (char*)ft_memccpy(d, s, 'c', 5));
	return(0);
}
