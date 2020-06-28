/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 21:31:07 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/27 22:55:57 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int 	main()
{
    char s[] = "sssxd";

	printf("ft_memchr = %s\n", ft_memchr(s, '\0', 16));
	printf("memchr = %s\n", memchr(s, '\0', 16));
	return (0);
}
