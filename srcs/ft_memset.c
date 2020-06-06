/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 23:08:32 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/05 23:08:55 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void *ft_memset(void *s, int c, size_t n)
{
	int i;
	char *str;

	str = (char*)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return(str);
}
