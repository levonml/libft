#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

int main(void)
{
    int tests_passed = 0;

    char *s1 = malloc(sizeof(char) * 20);
    char *s2 = malloc(sizeof(char) * 20);
    char *src = " and this last";

    s1[0] = '\0';
    s2[0] = '\0';

    size_t ret1 = ft_strlcat(s1, "this first", 20);
    size_t ret2 = strlcat(s2, "this first", 20);

    if (ret1 == ret2)
        tests_passed++;
    else
        printf("ERROR: ret1 != ret2\n%zu\n%zu\n", ret1, ret2);

    if (strcmp(s1, s2) == 0)
        tests_passed++;
    else
        printf("ERROR: strcmp(s1, s2) != 0\n%s\n%s\n", s1, s2);

    ret1 = ft_strlcat(s1, src, 20);
    ret2 = strlcat(s2, src, 20);
    if (ret1 == ret2)
        tests_passed++;
    else
        printf("ERROR: ret1 != ret2\n%zu\n%zu\n", ret1, ret2);

    if (strcmp(s1, s2) == 0)
        tests_passed++;
    else
        printf("ERROR: strcmp(s1, s2) != 0\n%s\n%s\n", s1, s2);

    free(s1);
    free(s2);
    if (tests_passed == 4)
	{
		printf("\tOK\n");
        return (1);
	}
    return (0);
}
