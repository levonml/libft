/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:03:30 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/06 17:51:19 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*f(t_list *elem)

{
	elem->content = "G";
	return (elem);
	}

int main(void)
{
	t_list *a;
	t_list *b;
	t_list *c;
	t_list *ptr;
	t_list *temp;
	t_list *test;
//	t_list *n;

	a = ft_lstnew("123456", 7);
	b = ft_lstnew("aa", 3);
	c = ft_lstnew("zz", 3);
	temp = a;
	temp->next = b;
	temp = b;
	temp->next = c;
	//n = ft_lstnew(NULL, 2);
//		n  = NULL ;
	test = ft_lstmap(a, f);
//	test = ft_lstmap(n, f);

	ptr = test;
	while ( ptr != NULL)
	{
		printf("%s\n",  ptr->content);
		ptr = ptr->next;
	}
	return (0);
}
