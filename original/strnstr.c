#include <bsd/string.h>
#include <stdio.h>

int main()
{
	char big[] = "12aaa456";
   	char little[] = "aa";
	printf("%s\n", strnstr(big, little, 4));
	//	printf("%s\n", dest);
	return (0);
}
