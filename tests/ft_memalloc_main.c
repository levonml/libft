#include <stdio.h>

void *ft_memalloc(size_t n);

int	main()
{
	printf("%s", (char*)ft_memalloc(5));
		printf("until here\n");
	return (0);
}
