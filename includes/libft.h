/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 12:51:45 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/17 00:28:55 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

#define WS(x) (x == ' ' || x == '\n' || x == '\t')

size_t	ft_strlen(const char *c);
int		ft_strcmp(char const *s1, char const *s2);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strsub(char const *s, unsigned char start, size_t len);
char	*ft_strnew(size_t size);
void	ft_bzero(void *s, size_t n);
#endif
