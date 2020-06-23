/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 21:31:07 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/21 23:01:46 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int 	main()
{
    char s[] = "aarcaacas";

	printf("ft_memchr = %s\n", ft_memchr(s, 'c', 5));
	printf("memchr = %s\n", memchr(s, 'c', 5));
	return (0);
}
