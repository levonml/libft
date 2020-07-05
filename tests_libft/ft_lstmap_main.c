/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:03:30 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/05 20:22:15 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*f(t_list *elem)
{
		elem -> content = elem -> content;
	return (elem);
}

int main(void)
{
	t_list *a;
	t_list *temp;
	t_list *b;
	t_list *c;
	t_list *test;
	t_list *(*fnc)(t_list *a);
	fnc = &f;
	a = ft_lstnew("a", 20);
	b = ft_lstnew("aa", 20);
	c = ft_lstnew("aaaa", 20);
	a -> next = b;
	b -> next = c;
	c -> next = NULL;
	test = ft_lstmap(a, fnc);
	temp = a;
	while (temp != NULL)
	{
		printf("%s\n", temp -> content);
		temp = temp -> next;
	}
	return (0);
}
