/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 18:50:38 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/06 10:22:57 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void del(void *str, size_t n)
{
	ft_bzero(str ,n);
//	free(str);
}
int main(void)
{
	t_list *test;
	char *a;
	size_t b;

	test = ft_lstnew("test", 5);
	a = test -> content;
	b = test -> content_size;
//	void (*d)(void *a, size_t b);
//	d = &del;

	ft_lstdelone(&test, &del);
	printf("content = %s\nsize = %zu", test -> content, test -> content_size);
	return(0);
}
