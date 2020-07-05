/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:39:35 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/05 20:22:03 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

		new = (t_list *)(malloc(sizeof(t_list)));
		if (new == NULL)
			return (NULL);
	while (lst != NULL)
	{
		new = f(lst);
		lst = lst -> next;
		new -> next = (t_list *)(malloc(sizeof(t_list)));
//		new = ft_lstnew() 
	}
	new -> next = NULL;

	return (lst);
}
