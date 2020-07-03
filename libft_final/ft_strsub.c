/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 22:46:27 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/15 23:24:36 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned char start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = ft_strnew(len);
	if (!sub)
		return (NULL);
	else
	{
		i = 0;
		while (i < len)
		{
			sub[i] = s[start];
			i++;
			start++;
		}
	}
	return (sub);
}
