/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:38:37 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/23 10:46:38 by lstepany         ###   ########.fr       */
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
	printf("%s", ft_strmap(r, &func));
	return (0);
}
