/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:27:39 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/23 10:05:38 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{

	char s[] = "I am a string";
	// 	s[1] = 'U';
	printf("s = %s\n", s);
		ft_strclr(s);
		//	s[0] = 'U';
		printf("s = %s\n", s);
	return (0);
}
