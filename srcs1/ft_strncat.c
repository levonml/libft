/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 15:53:47 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/09 21:36:37 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char* dest, const char *src, size_t n)
{
	size_t i;
	int j;

	j = ft_strlen(dest);
	i = 0;
	while ((i < n) && (src[i]))
	{
		dest[j] = src[i];
		j++;
		i++;
	}
		dest[j] = '\0';
	return (dest);
}
