/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:42:26 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/30 17:25:43 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>


int main(int argc, char **argv)
{
	char d[5] = "123";
	 	char d1[5] = "123";
	if (argc < 2)
	{
		printf("argument is missing");
		return(0);
	}
	else
	{
		printf("ft_strncat = %s\n", ft_strncat(d, argv[1], 4));
				printf("strncat = %s\n", strncat(d1, argv[1], 4));
	}
			 return (0);
}
