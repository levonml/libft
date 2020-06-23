/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:12:17 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/22 19:52:20 by lstepany         ###   ########.fr       */
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
		printf("ft_isalpha = %d\n", ft_isalpha(argv[1][0]));
	printf("isalpha = %d\n", isalpha(argv[1][0]));
	return (0);
}
