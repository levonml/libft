#include <stdio.h>
#include <string.h>
#include "libft.h"

int 	main()
{
	char s[] = "0123456789";
	//char c[] = "abcde";

   	printf("ft_memcpy = %s\n", ft_memcpy(s + 1, s, 5));
		printf("memcpy = %s\n", memcpy(s + 1, s, 5));
	return(0);
}
