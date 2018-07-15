/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 21:58:48 by jxie              #+#    #+#             */
/*   Updated: 2018/07/14 22:09:35 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char *tmp;
	size_t i;

	tmp = (const unsigned char*)str;
	i = 0;
	while(n--)
	{
		if (tmp[i] == (unsigned char)c)
			return((void *)(tmp--));
			i++;
	}
	return (NULL);
}
