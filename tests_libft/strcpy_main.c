/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:49:00 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/28 20:03:24 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char *ft_strcpy(char *dest, const char *src);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		//	printf("strcpy = %s\n",strcpy(argv[1], argv[2]));		
		printf(" ft_strcpy = %s\n", ft_strcpy(argv[1] , argv[2]));
		//	printf("strcpy = %s\n",strcpy(argv[1], argv[2]));
	//	printf("strscpy = %s\n",strcpy(argv[1] + 3, argv[1]));
	}
		return (0);
}
