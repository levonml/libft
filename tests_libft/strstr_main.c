/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 19:02:25 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/28 00:34:54 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	if (3 < 2)
	{
		printf("argument is missing");
		return(1);
	}
	else
	{
		printf("ft_strstr = %s\n", ft_strstr("", "\0"));
   		printf("strstr = %s\n", strstr("", "\0"));
	}
	return (0);
}
