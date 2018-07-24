/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:48:10 by jxie              #+#    #+#             */
/*   Updated: 2018/07/22 11:49:09 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d1;
	const char	*s1;

	s1 = (char*)src;
	d1 = (char*)dest;
	while (n--)
	{
		*d1 = *s1;
		d1++;
		if (*s1 == (char)c)
			return (d1);
		s1++;
	}
	return (NULL);
}
