#include <string.h>
#include <stdio.h>

int main()
{
   	char d[] = "12";
	char s[] = "aafbcd";

   	printf("%s\n", memccpy(d, s, 'f', 5));

	return(0);
}
