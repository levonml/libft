/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:42:26 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/22 18:25:14 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>


int main(int argc, char **argv)
{
	char d[20] = "12345";
	if (argc < 2)
	{
		printf("argument is missing");
		return(0);
	}
	else
	 printf("ft_strncat = %s", ft_strncat(d, argv[1], 2));
	//printf("strncat = %s\n", strncat(d, argv[1], 2));
	return (0);
}
