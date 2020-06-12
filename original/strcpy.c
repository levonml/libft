#include <string.h>
#include <stdio.h>

int main()
{
	char a[] = "123456789";
	//	char b[] = "1";
	printf("%s", strcpy(a + 3, a));
	return (0);
}
