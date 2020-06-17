/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 11:04:29 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/17 11:41:49 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_itoa(int n)
{
	char *str;
	int i;

	str = "000";
	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		i++;
	}
	//	str[i] = (n % 10) + '0';
		str = ft_itoa(n % 10) + 48;
	return (str);
}
int main()
{
	printf("%s\n", ft_itoa(123));
	return (0);
}
