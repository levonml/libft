#include <stdio.h>
void	*ft_memcpy(void *s, const void *c, size_t n);

int 	main()
{
	char s[] = "12345678";
	//    char c[] = "abcde";

	printf("%s\n", (char*)ft_memcpy(s + 2, s, 7));
	return(0);
}
