/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 10:57:41 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/02 14:02:45 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "stdlib.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{

	t_list *lst;


	lst = *alst;
	while (lst -> next != NULL)
	{
		del(lst -> content, lst -> content_size);
		lst = lst -> next;
	}
	free (lst);
	lst = NULL;
}
