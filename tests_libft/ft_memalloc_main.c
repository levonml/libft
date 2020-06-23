/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 20:29:24 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/22 20:54:57 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"


int	main()
{
	printf("%c\n", ((char*)ft_memalloc(1))[0] = 'M');
//		printf("until here\n");
	return (0);
}
