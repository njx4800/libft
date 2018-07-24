/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 22:08:03 by jxie              #+#    #+#             */
/*   Updated: 2018/07/24 09:01:37 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*sdup;

	sdup = (char*)malloc(sizeof(char) * n + 1);
	if (!sdup)
		return (NULL);
	sdup = ft_strncpy(sdup, s1, n);
	sdup[n] = '\0';
	return (sdup);
}
