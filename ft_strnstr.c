/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:49:24 by jxie              #+#    #+#             */
/*   Updated: 2018/07/15 15:04:35 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if(!*needle)
		return((char*)haystack);
	while(*haystack && len--)
	{
		while(*haystack == *needle && *needle)
		{
			needle++;
			if(!*needle)
				return((char *)haystack);
		}
		haystack++;
	}
	return(NULL);
}
