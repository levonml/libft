/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:43:07 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/23 11:44:43 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int 	main(int argc, char **argv)
{

	if (argc < 2)
	{
		printf("arguments missing\n");
		return(1);
	}
	else
	{
	printf("%d\n", 	ft_strequ(argv[1], argv[2]));
	}
	return(0);
}
