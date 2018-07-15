/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 14:24:06 by jxie              #+#    #+#             */
/*   Updated: 2018/07/15 15:05:26 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	if(!*needle)
		return((char*)haystack);
	while(*haystack)
	{
		while(*haystack == *needle && *needle)
		{
			needle++;
			if(!*needle)
				return((char*)haystack);
		}
		haystack++;
	}
		return(NULL);
}
