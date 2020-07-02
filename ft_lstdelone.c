/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 10:10:16 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/02 13:58:32 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;

	lst = *alst;
	if (lst != NULL)
	{
		del(lst -> content, lst -> content_size);	
		free(lst);
	}
	lst = NULL;
}

