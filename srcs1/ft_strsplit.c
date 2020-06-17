/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 09:39:42 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/17 11:03:48 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_strsplit(char const  s*, char c)
{
	char **split;
	int i;

    i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j = 0;
			i++;
		}
		else
		{
			j++;
		}
			
	}
	i++
		split ==(char**)malloc(sizeof(char*) * (j + 1));
	split[j + 1] = "\0";
	
	while (split[i])
	{
		split[i] = (char*)malloc(sizeof(char) * n);
		i++;
	}
}
