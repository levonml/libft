/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 23:42:45 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/22 01:27:42 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int 	main()
{
	char s[] = "0123456789";
	//  char c[] = "addsd";

	//			printf("ft_memmove = %s\n", ft_memmove(s + 2, s, 6));
			printf("memmove = %s\n", memmove(s + 2, s, 6));
	return(0);
}
