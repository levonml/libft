/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:58:09 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/28 19:54:05 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
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
		printf("ft_strdup = %s\n", ft_strdup(argv[1]));
  		printf("strdup = %s\n", strdup(argv[1]));
			printf("\n\nstrdup = %s\n", strdup("1234\05678"));
				printf("ft_strdup = %s\n", ft_strdup("1234\05678"));
	}
	return (0);
}
