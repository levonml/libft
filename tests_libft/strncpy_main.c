/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:05:28 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/22 17:39:58 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char d[] = "123456789";
	char s[] = "abcdefghijklmn";

		printf("ft_strncpy = %s", ft_strncpy(d, s, 8));
	//	   	printf("strncpy = %s", strncpy(d, s, 8));
	return (0);
}
