/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 21:40:36 by jxie              #+#    #+#             */
/*   Updated: 2018/07/15 15:31:04 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
	char *d1;
	char *s1;

	d1 = (char*)dest;
	s1 = (char*)src;

	if(s1 >= d1)
		ft_memcpy(d1, s1, len);
	else
		while(len--)
		{
			*d1 = *s1;
			d1++;
			s1++;
		}
	return(d1);
}
