/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 16:44:17 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/13 17:59:12 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	char *str;

	if(!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	else
	{
		ft_bzero((void*)str, size + 1);
		return (str);
	}
		   
}
