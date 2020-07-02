/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:03:30 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/02 13:48:03 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*f(t_list *elem)
{
		elem -> content = "a";
	return (elem);
}

int main(void)
{
	t_list *a;
	t_list *b;
	t_list *test;

	b = NULL;
	a = NULL;
	a -> content = "f";
	a -> content_size = sizeof(char) * 2;
	a -> next = b;
	b -> content = "g";
	b -> content_size = sizeof(char) * 2;
	b -> next = NULL;
	test = ft_lstmap(a, f);
	printf("%s\n", test -> content);
	return (0);
}
