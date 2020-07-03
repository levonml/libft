/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:39:35 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/02 15:07:39 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	new = NULL;
	while (lst -> next != NULL)
	{
		new = (t_list *)(malloc(sizeof(t_list *)));
		new = f(lst);
		lst = lst -> next;
		new -> next = new; 
	}
	new -> next = NULL;
	return (new);
}
