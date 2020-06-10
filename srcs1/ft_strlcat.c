/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 11:46:09 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/10 19:32:58 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	int		h;

	h = 0;
	while (src[h])
		h++;
	j = ft_strlen(dest);
	if (size <= j)
		return (size + h);
	else
	{
		i = 0;
		while ((src[i]) && (i < (size - j - 1)))
		{
			dest[j + i] = src[i];
			i++;
		}
		dest[j + i] = '\0';
		return (h + j);
	}
	return (0);
}
