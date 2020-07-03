/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 18:50:38 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/03 19:26:49 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
void del(void *str, size_t n)
{
	ft_bzero(str ,n);
}
int main(void)
{
	t_list *test;

	test = ft_lstnew("test", 5);
	ft_lstdel(test,  &del("test", 5));
	printf("content = %s\nsize = %zu", test -> content, test -> content_size);
	return(0);
}
