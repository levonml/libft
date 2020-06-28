/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 19:47:06 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/27 11:40:38 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("arguments are missing\n");
		return(1);
	}
	else
	{
		
	int n;
	int i;

	i = 0;
	n = 0;
   	while(argv[2][i])
	{
		n = 10 * n + argv[2][i] - 48;
		i++;
	}
	//	ft_bzero(argv[1], n );
				bzero(argv[1], n );
	 printf("%s\n", argv[1]);
	}
	return(0);
}
