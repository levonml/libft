#include<stdio.h>
#include<string.h>
int main(void)
{
	int i;
	//	int j = 49;
	//		int str[] = {1, 2, 3, 4, 5, 6, 7};
	char str[] = "0234567";
	memset(str, '1', 6);
	// 	for( i = 0; i < 7; i++)
	//	printf("%d\n", str[i]);
	printf("str = %s\n", str);
	return(0);
}
