/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 20:12:59 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/27 12:43:05 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int 	main()
{
	char d[] = "123\034";
    char s[] = "r\0caaas";


		printf("ft_memccpy - %s\n",  (char*)ft_memccpy(d, s, '\0', 5));
		printf("memccpy - %s\n",  (char*)memccpy(d, s, '\0', 5));
	return (0);
}
