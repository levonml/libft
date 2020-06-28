#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int    main(void)
{
    int tests_passed = 0;

    char *str = "find the needlneedle needle in the haystack";

    char *p1 = ft_strnstr(str, "needle", 20);
    char *p2 = strnstr(str, "needle", 20);
    
    if (strcmp(p1, p2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(p1, p2) != 0\n%s\n%s\n", p1, p2);
    
    p1 = ft_strnstr(str, "needle", 19);
    p2 = strnstr(str, "needle", 19);
    if (p1 == p2)
        tests_passed++;
    else
        printf("\nERROR: p1 != p2\n%s\n%s\n", p1, p2);

    p1 = ft_strnstr(str, "", 20);
    p2 = strnstr(str, "", 20);
    if (strcmp(p1, p2) == 0)
        tests_passed++;
    else
        printf("\nERROR: strcmp(p1, p2) != 0\n%s\n%s\n", p1, p2);

    str = "need the /0 needle!";
    p1 = ft_strnstr(str, "needle", 19);
    p2 = strnstr(str, "needle", 19);
    if (p1 == p2)
        tests_passed++;
    else
        ft_putstr("ERROR: p1 != p2 (after null)");

    if (tests_passed == 4)
	{
		printf("\tOK\n");
        return (1);
	}
    return (0);
}
