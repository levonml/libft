#include <stdio.h>
#include <string.h>
#include "libft.h"

int 	main()
{
	char s[] = "hello";
	char c[] = "12345";

   	printf("ft_memcpy = %s\n", ft_memcpy(s, c, 3));
	printf("memcpy = %s\n", memcpy(s, c, 3));
	return(0);
}
