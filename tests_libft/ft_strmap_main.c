/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:38:37 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/06 16:03:28 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char func(char q)
{
	q = 'l';
	return (q);
}
int main()
{
	const char *r = "123456789";
	char *str;

	str = ft_strmap(r, &func);
	printf("%s", str);
	return (0);
}
