/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 12:38:08 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/22 19:27:48 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;
	int		j;

	if ((char*)little == NULL)
		return ((char*)big);
	else
	{
		k = 0;
		while (big[k] && (k < len))
		{
			j = 0;
			i = k;
			while ((little[j]) && (big[i] == little[j]) && (i < len))
			{
				j++;
				i++;
			}
			if (little[j] == '\0')
				return ((char*)(big + k));
			else
				k++;
		}
	}
	return (NULL);
}
