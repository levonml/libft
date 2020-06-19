/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 10:02:26 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/15 12:24:46 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	int		i;

	map = ft_strnew(ft_strlen(s));
	if (map == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (s[i])
		{
			map[i] = f(s[i]);
			i++;
		}
	}
	return (map);
}
