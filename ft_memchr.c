/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 21:58:48 by jxie              #+#    #+#             */
/*   Updated: 2018/07/22 12:02:51 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*tmp;
	size_t		i;

	tmp = (void*)malloc(sizeof(char*));
	if (tmp == NULL)
		return (NULL);
	tmp = str;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)tmp[i] == (unsigned char)c)
			return ((char*)&str[i]);
		i++;
	}
	return (NULL);
}
