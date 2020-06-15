/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 12:15:54 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/15 12:27:01 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	map = ft_strnew(ft_strlen(s));
	if (map == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (s[i])
		{
			map[i] = f(i, s[i]);
			i++;
		}
	}
	return (map);
}
