#include <string.h>
#include <stdio.h>

int main()
{
   	char a[] = "1";
	char c[] = "116";
 
   	printf("%d\n", memcmp(a, c, 2));

	return(0);
}
