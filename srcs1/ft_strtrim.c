/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 22:54:36 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/17 00:27:58 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	int		l;
	char*	trim;

	l = ft_strlen(s);
	if ((WS(s[0])) && (WS(s[l - 1])))
		trim = ft_strsub(s, 1, l - 2);
	else if (WS(s[0]))
		trim = ft_strsub(s, 1, l - 1);
	else if (WS(s[l - 1]))
		trim = ft_strsub(s, 0, l - 1);
	else
		trim = ft_strsub(s, 0, l);
	return (trim);
}
