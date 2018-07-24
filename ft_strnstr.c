/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:49:24 by jxie              #+#    #+#             */
/*   Updated: 2018/07/23 20:35:47 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *ss, size_t len)
{
	size_t	i;
	char	*big;

	i = 0;
	big = (char*)s;
	if (!*ss)
		return ((char*)big);
	while (*big)
	{
		while (big[i] == ss[i] && ss[i] && &big[i] < &s[len])
			i++;
		if (ss[i] == '\0')
			return ((char *)big);
		big++;
	}
	return (NULL);
}
