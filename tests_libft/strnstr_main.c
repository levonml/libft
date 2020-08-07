/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 19:08:28 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/08 16:56:55 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
//#include <bsd/string.h>


int main(int argc, char **argv)
{
	int n;
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		n = atoi(argv[3]);
		printf("ft_strnstr = %s\n", ft_strnstr(argv[1], argv[2], n));
		printf("strnstr = %s\n", strnstr(argv[1], argv[2], n));
	}
	return (0);
}
