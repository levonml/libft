/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:05:23 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/06 13:05:33 by lstepany         ###   ########.fr       */
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
//	void (*fun)(t_list *a);

//	fun = &f;
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

	ft_lstiter(a, f);
//	printf("%s\n", test -> content);
	printf("%s\n", b -> content);
	return (0);
}
