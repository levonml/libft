/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:17:01 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/23 11:18:03 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char func(unsigned int i, char q)
{
	
	q = q + i;
	return (q);
}
int main()
{
	const char *r = "123456789";
	printf("%s", ft_strmapi(r, &func));
	return (0);
}
