/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 11:46:29 by lstepany          #+#    #+#             */
/*   Updated: 2020/07/09 15:48:36 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list *new;
//	char *c;

//	c = "a";
		char content[] = "hello";
	//	int content[] = {1, 2, 3};
//	char  *content = &c;
	//	size_t cont_size = 3 * sizeof(int);
	size_t cont_size = 10;
	
	new = ft_lstnew(content, cont_size);
	//	printf("content = %d\nsize = %zu\n", ((int *)(new -> content))[0], new -> content_size);
		printf("size = %zu\n", new->content_size);	
	return(0);
}
