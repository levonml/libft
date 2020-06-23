/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:08:12 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/22 19:59:49 by lstepany         ###   ########.fr       */
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
		//	printf("ft_isascii = %d\n", ft_isascii(argv[1][0]));
		printf("ft_toupper = %c\n", ft_toupper(argv[1][0]));
		printf("toupper = %c\n", toupper(argv[1][0]));
	}
	return (0);
}
