/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 20:12:59 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/22 01:45:18 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int 	main()
{
	char d[] = "12345";
    char s[] = "aaraaacs";


		printf("%s\n",  (char*)ft_memccpy(d, s, 'c', 5));
		printf("%s\n",  (char*)memccpy(d, s, 'c', 5));
	return (0);
}
