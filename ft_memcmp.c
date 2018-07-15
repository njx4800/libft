/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 22:13:33 by jxie              #+#    #+#             */
/*   Updated: 2018/07/14 22:16:32 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1;
	const unsigned char *p2;

	p1 = (unsigned char*)s1;
	p2 = (unsigned char*)s2;

	while(n)
	{
		if (*p1 != *p2)
			return(*p1 - *p2);
			p1++;
			p2++;
			n--;
	}
	return(0);
}
