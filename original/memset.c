#include <stdio.h>
#include <string.h>

int main()
{
	char str[4] = "1236";
		int i = 0;
		while (i < 10)
		{
		str[i] = 'c';
		i++;
	}
		//	printf("%s\n", memset(str, 'a', 9));
		printf("%s\n", str);
	return (0);
}
