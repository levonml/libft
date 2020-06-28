/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:21:29 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/23 13:23:56 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char **ft_strsplit(char const *s, char c);

int main()
{
	 	int i;
	char **split;

	split = ft_strsplit("hello aaastr_aaaasaaaplitaaa!aaa!aaaaa!!!!aaaaaaaaaaa", 'a');
		i = 0;
		while (split[i])
			{
			printf("%s", split[i]);
			i++;
				}
	return(0);
}
