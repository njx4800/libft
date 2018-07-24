/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 23:06:24 by jxie              #+#    #+#             */
/*   Updated: 2018/07/23 18:25:15 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*sdup;
	int		len;

	len = 0;
	sdup = (char*)malloc(sizeof(char) * ft_strlen(str1) + 1);
	if (!sdup)
		return (NULL);
	ft_strcpy(&sdup[len], &str1[len]);
	return (sdup);
}
