/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 22:47:16 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/27 11:29:17 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(int argc, char **argv)
{

	int n;
	int i;

	if (argc == 1)
	{
		printf("arguments missing\n");
		return(1);
	}
	else
	{
	i = 0;
	n = 0;
   	while(argv[3][i])
	{
		n = 10 * n + argv[3][i] - 48;
		i++;
	}
	printf("ft_memset - %s\n", ft_memset(argv[1], argv[2][0], n ));
	printf("memset - %s\n", memset(argv[1], argv[2][0], n ));
	}
	return(0);
}
