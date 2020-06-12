#include <string.h>
#include <stdio.h>

int main()
{
	char a[] = "123";
   	char b[] = "xyzabc";
	printf("%s", strncpy(a, b, 6));
	return (0);
}
