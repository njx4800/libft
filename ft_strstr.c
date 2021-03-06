/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:24:06 by jxie              #+#    #+#             */
/*   Updated: 2018/07/22 17:15:50 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	if (!*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		i = 0;
		while (needle[i] == haystack[i])
		{
			if (!needle[i + 1])
				return ((char*)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
