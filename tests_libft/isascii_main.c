/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:46:16 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/26 08:34:10 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		//	printf("ft_isascii = %d\n", ft_isascii(argv[1][0]));
		printf("ft_isascii = %d\n", ft_isascii(atoi(argv[1])));
		printf("isascii = %d\n", isascii(atoi(argv[1])));
	}
	return (0);
}
