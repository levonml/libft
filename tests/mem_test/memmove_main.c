#include <stdio.h>
void	*ft_memmove(void *s, const void *c, size_t n);

int 	main()
{
	char s[] = "0123456789";
	//  char c[] = "abcde";

	printf("%s\n", (char*)ft_memmove(s + 6, s, 0));
	return(0);
}
