/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:05:28 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/28 20:22:38 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char d[] = "12345667";
	char s[] = "";

	//	printf("ft_strncpy = %s", ft_strncpy(d, s, 0));
		   	printf("strncpy = %s", strncpy(d, s, 0));
	return (0);
}
