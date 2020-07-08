/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 23:42:45 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/08 13:00:18 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int 	main()
{
		char s[] = "123456789";
		char d[] = "123456789";
	//	int n[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	//	int m[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // char c[] = "abc\0cd";

	 printf("ft_memmove = %s\n", ft_memmove(s + 2, s, 8));
		printf("memmove = %s\n", memmove(d +2, d, 8));

	return(0);
}
