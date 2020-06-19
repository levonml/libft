#include <stdio.h>
#include "libft.h"
char **ft_strsplit(char const *s, char c);
/*char **ft_strsplit(char const *s)
{
	char **split;
	int i;
	
	split = (char**)malloc(sizeof(char*) * 4);
	if (split == NULL)
		return (NULL);
	//		split[3] = "\0";
	i = 0;
	while (i < 4)
	{
		split[i] =ft_strsub(s, 1, 5);
		i++;
	}
	split[i] = NULL;
	return(split);
}
*/
int main()
{
	 	int i;
	char **split;

	split = ft_strsplit("771aaa2aaa3aaa4aa5a6aaaaaaaaaaaaa", 'a');
		i = 0;
		while (split[i])
			{
			printf("%s\n", split[i]);
			i++;
				}
	return(0);
}
