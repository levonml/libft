#include <bsd/string.h>
#include <stdio.h>

int main()
{
	char dest[] = "123456";
   	char src[] = "78";
	printf("%zu\n", strlcat(dest, src, 5));
		printf("%s\n", dest);
	return (0);
}
