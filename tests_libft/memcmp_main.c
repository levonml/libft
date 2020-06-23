/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 22:35:23 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/21 22:58:55 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int 	main(int argc, char **argv)
{

	int n;
	int i;

	if (argc < 3)
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

	printf("ft_memcmp = %d\n", 	ft_memcmp(argv[1], argv[2], n ));
		printf("mem cmp = %d\n", 	memcmp(argv[1], argv[2], n ));
	
	}
	return(0);
}
