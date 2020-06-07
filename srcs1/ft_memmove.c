/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 16:39:09 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/07 14:11:00 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		*t;

	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	t = (unsigned char*)malloc(n * sizeof(src));
	if (t == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < n)
		{
			t[i] = s[i];
			i++;
		}
		i = 0;
		while (i < n)
		{
			d[i] = t[i];
			i++;
		}
	}
	return (dest);
}

