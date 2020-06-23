/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:07:50 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/23 10:20:33 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{

	char *s[] = {"I am here"};
	// 	s[1] = 'U';
	printf("s = %s\n", s[0]);
		ft_strdel(s);
		//	s[0] = 'U';
		printf("s = %s\n", s[0]);
	return (0);
}
