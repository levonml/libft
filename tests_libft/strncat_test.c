#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int     main(void)
{
    int tests_passed = 0;

    char *s1 = malloc(sizeof(char) * 25);
    char *s2 = malloc(sizeof(char) * 25);
    char *src = " and this last";

    s1[0] = '\0';
    s2[0] = '\0';

    char *ret1 = ft_strncat(s1, "this first", 25);
    char *ret2 = strncat(s2, "this first", 25);

    if (strcmp(ret1, ret2) == 0)
        tests_passed++;
    else
        printf("\nERROR 1: strcmp(ret1, ret2) != 0\n%s\n%s\n", ret1, ret2);

    if (strcmp(s1, s2) == 0)
        tests_passed++;
    else
        printf("\nERROR 2: strcmp(s1, s2) != 0\n%s\n%s\n", s1, s2);

    ret1 = ft_strncat(s1, src, 25 - strlen(src) - 1);
    ret2 = ft_strncat(s2, src, 25 - strlen(src) - 1);

    if (strcmp(ret1, ret2) == 0)
        tests_passed++;
    else
        printf("\nERROR 3: strcmp(ret1, ret2) != 0\n%s\n%s\n", ret1, ret2);
    
    if (strcmp(s1, s2) == 0)
        tests_passed++;
    else
        printf("\nERROR 4: strcmp(ret1, ret2) != 0\n%s\n%s\n", ret1, ret2);

    free(s1);
    free(s2);
    if (tests_passed == 4)
	{
		printf("\tOK\n");
        return (1);
	}
    return (0);
}
