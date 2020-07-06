/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 18:50:38 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/06 09:21:26 by lstepany         ###   ########.fr       */
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
	t_list *base;
//	t_list **head;
	t_list *new;

	new = ft_lstnew("new", 4);
//	base = ft_lstnew("base", 5);
	base = NULL;
	ft_lstadd(&base, new);
	while (base != NULL)
	{
		printf("content = %s\nsize = %zu\n", base -> content, base -> content_size);
		base = base -> next;
	}
	return(0);
}
