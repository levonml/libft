/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 16:05:29 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/27 10:59:23 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int res;
	int i;
	int s;

	i = 0;
	res = 0;
	s = 1;
	while (nptr[i] == ' ' || nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == '\t' || nptr[i] == '\n')
		i++;
	if (nptr[i] == '-')
	{
		i++;
		s = -1;
	}
	if (nptr[i] == '+')
		i++;
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * s);
}
