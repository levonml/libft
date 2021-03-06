#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int    main(void)
{
    int tests_passed = 0;

    char *str = "find the needlneedle needle in the haystack";

    char *p1 = ft_strstr(str, "needle");
    char *p2 = strstr(str, "needle");
    
    if (strcmp(p1, p2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(p1, p2) != 0\n%s\n%s\n", p1, p2);
    
    p1 = ft_strstr(str, "needle  ");
    p2 = strstr(str, "needle  ");
    if (p1 == p2)
        tests_passed++;
    else
        printf("\nERROR: p1 != p2\n%s\n%s\n", p1, p2);

    p1 = ft_strstr(str, "");
    p2 = strstr(str, "");
    if (strcmp(p1, p2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(p1, p2) != 0\n%s\n%s\n", p1, p2);
    
    if (tests_passed == 3)
	{
		printf("\tOK\n");
        return (1);
	}
    return (0);
}
