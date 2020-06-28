/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 22:35:23 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/29 00:48:27 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int 	main(int argc, char **argv)
{

		int n;
	   	int i;

	if (argc < 4)
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
	//	int i[] = {1, 1, 0, 4, 0};
	//	int i2[] = {1, 1, 0, 4, 5};
	
		//	printf("ft_memcmp = %d\n", 	ft_memcmp(i, i2, sizeof(int)*5));
		//   printf("memcmp = %d\n", 	memcmp(i, i2, sizeof(int)*5));
	printf("ft_memcmp = %d\n", 	ft_memcmp(argv[1], argv[2], n));
	printf("memcmp = %d\n", 	memcmp(argv[1], argv[2], n));
		printf("ft_memcmp = %d\n", 	ft_memcmp("testing this string\0 which continues", "testing this string  which", 21));
			printf("memcmp = %d\n", 	memcmp("testing this string\0 which continues", "testing this string  which", 21));
	}
	return(0);
}
