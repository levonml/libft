/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:24:46 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/23 10:26:31 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void func(char *q)
{
	printf("%s\n", q);
}
int main()
{
	char *r = "hello";
	ft_striter(r, &func);
	return (0);
}
