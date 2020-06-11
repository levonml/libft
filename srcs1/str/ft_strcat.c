/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 11:25:42 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/10 21:35:44 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_strcat(char* dest, const char *src)
{
	int i;
	int j;

	j = 0;
	while (dest[j])
		j++;
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
