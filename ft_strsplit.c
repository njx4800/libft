/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 20:05:10 by jxie              #+#    #+#             */
/*   Updated: 2018/07/24 14:18:04 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		words;
	char	**fresh;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	words = ft_wdcount((char*)s, 0, c);
	if (!(fresh = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	while (words--)
	{
		while (*s == c && *s != '\0')
		{
			s++;
			i++;
		}
		if (!(fresh[k++] = ft_strsub((char*)s, 0, ft_wdlen((char*)s, c))))
			return (NULL);
		s += ft_wdlen((char*)s, c);
	}
	fresh[k] = NULL;
	return (fresh);
}
