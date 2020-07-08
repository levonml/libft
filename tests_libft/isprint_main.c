/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:38:55 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/08 12:51:04 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		//   	printf("isprint = %d\n", ft_isprint('\v'));
		//	printf("ft_isprint = %d\n", ft_isprint('\v'));
				printf("ft_isprint = %d\n", ft_isprint(argv[1][0]));
				printf("isprint = %d\n", isprint(argv[1][0]));
	}
	return (0);
}
