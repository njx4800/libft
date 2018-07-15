/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:41:31 by jxie              #+#    #+#             */
/*   Updated: 2018/07/14 20:50:41 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t i;
	char *d;
	const char *s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;

	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return(dest);
}
