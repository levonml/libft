/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 10:57:41 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/06 12:17:35 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "stdlib.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{

	t_list *current;
	t_list *next_node;

	current = *alst;
	if (*alst != NULL)
		current = *alst;
	while (current != NULL)
	{
		next_node = current -> next;
		del(current -> content, current -> content_size);
		free(current);
		current = next_node;
	}
	*alst = NULL;
}
