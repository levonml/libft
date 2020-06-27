/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 10:31:55 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/22 19:07:43 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;

	k = 0;
	while (haystack[k])
	{
		j = 0;
		i = k;
		while ((needle[j]) && (haystack[i] == needle[j]))
		{
			j++;
			i++;
		}
		if (needle[j] == '\0')
			return ((char*)(haystack + k));
		else
			k++;
	}
	return (NULL);
}
