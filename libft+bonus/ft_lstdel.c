/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 10:57:41 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/05 10:41:04 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "stdlib.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{

	t_list *temp;


	temp = *alst;
	while (temp != NULL)
	{
		del((temp) -> content, ((temp) -> content_size));
			temp = (*alst) -> next;
	}
	free (*alst);
	*alst = NULL;
}
