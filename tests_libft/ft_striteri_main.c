/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:32:40 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/23 10:36:15 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void func(unsigned int i, char *q)
{
	if (i == 1)
		printf("jajuuuuu!!!\n");
	else
		printf("%d = %s\n", i, q);
}
int main()
{
	char *r = "hello";
	ft_striteri(r, &func);
	return (0);
}
