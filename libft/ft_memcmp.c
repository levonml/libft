/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 14:26:53 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/19 15:18:29 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char*)s1;
	str2 = (char*)s2;

	if (n == 0)
		return (0);
	else
	{
		if (n > 0)
			{
				return(ft_strcmp(str1, str2));
	 		n--;
			}
	}
			return (0);
}
