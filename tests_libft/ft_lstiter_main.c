/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:03:30 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/05 12:38:51 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	f(t_list *elem)
{
		elem -> content = "a";
}

int main(void)
{
	t_list *a;
	t_list *b;
//	t_list *head;
	void (*fun)(t_list *a);

	fun = &f;
//	b = NULL;
//	a = NULL;
	a = (t_list *)(malloc(sizeof(t_list)));
	b = (t_list *)(malloc(sizeof(t_list)));
	a -> content = "f";
	a -> content_size = sizeof(char) * 2;
	a -> next = b;
	b -> content = "g";
	b -> content_size = sizeof(char) * 2;
	b -> next = NULL;

	ft_lstiter(a, fun);
//	printf("%s\n", test -> content);
	printf("%s\n", b -> content);
	return (0);
}
