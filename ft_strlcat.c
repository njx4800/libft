/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 23:31:01 by jxie              #+#    #+#             */
/*   Updated: 2018/07/14 23:31:06 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t i;
	size_t j;
	size_t len;

	len = ft_strlen(dest) + ft_strlen(src);

	if (destsize <= ft_strlen(dest))
		return(ft_strlen(src) + destsize);

	i = 0;
    while(dest[i] && i < destsize)
		i++;

	j = 0;
	while(src[j] && i + j + 1 < destsize)
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	return(len);
}
