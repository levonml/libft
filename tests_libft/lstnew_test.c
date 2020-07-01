#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		main(void)
{
	int 	tests_passed = 0;

	int		content[] = {1, 2, 3, 4, 5};
	t_list	*new = ft_lstnew(content, sizeof(int)*5);

	// 	content[0] = 0;

	for (int i = 0; i < 5; i++)
	{
		if (((int*)new->content)[i] == i + 1)
		{
			tests_passed++;
		}
		else
			printf("\nERROR1: ((int*)new->content)[i] != %d\n%d\n", i, ((int*)new->content)[i]);
			}

	if (new->next == NULL)
		tests_passed++;
	else
		printf("\nERROR2: new->next != NULL\n");
	
	if (new->content_size == sizeof(content))
		tests_passed++;
	else
		printf("\nERROR3: new->content_size != sizeof(content)\n");
	
	//	free(new->content);
	//	free(new);

	new = ft_lstnew(NULL, 100);

	if (new->content == NULL)
		tests_passed++;
	else
		printf("\nERROR4: new->content != NULL\n");

	if (new->next == NULL)
		tests_passed++;
	else
		printf("\nERROR5: new->next != NULL\n");

	if (new->content_size == 0)
		tests_passed++;
	else
		printf("\nERROR6: new->content_size != 0\n %zu", new -> content_size);

	//	free(new);

	new = ft_lstnew("", 1);

	if (memcmp(new->content, "", 1) == 0)
		tests_passed++;
	else
		printf("\nERROR7: new->content != '\\0'\n");

	if (new->next == NULL)
		tests_passed++;
	else
		printf("\nERROR8: new->next != NULL\n");

	if (new->content_size == 1)
		tests_passed++;
	else
		printf("\nERROR9: new->content_size != 1\n");
	
	//	free(new->content);
	//	free(new);

	new = ft_lstnew("not this", 0);

	if (new->content == NULL)
		tests_passed++;
	else
		printf("\nERROR10: new->content != NULL\n");

	if (new->next == NULL)
		tests_passed++;
	else
		printf("\nERROR11: new->next != NULL\n");

	if (new->content_size == 0)
		tests_passed++;
	else
		printf("\nERROR12: new->content_size != 0\n");
	
	//	free(new);

	if (tests_passed == 16)
	{
		printf("\tOK\n");
		return (1);
	}
	return (0);
}
