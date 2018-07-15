/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:48:10 by jxie              #+#    #+#             */
/*   Updated: 2018/07/14 21:32:37 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
	unsigned char *d1;
	const unsigned char *s1;

	s1 = (unsigned char*) src;
	d1 = (unsigned char*) dest;

	while(n--)
	{
		*d1 = *s1;
		d1++;
		if(*s1 == (char)c)
			return((void*)dest);
		s1++;
	}
	return(NULL);
}

