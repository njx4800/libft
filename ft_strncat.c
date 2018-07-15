/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 23:26:53 by jxie              #+#    #+#             */
/*   Updated: 2018/07/14 23:28:37 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *str1, const char *str2, size_t n)
{
	size_t i;
	size_t j;

	i = ft_strlen(str1);
	j = 0;

	while(j < n && str2[j])
	{
		str1[i + j] = str2[j];
		j++;
	}
	str1[i + j] = '\0';
	return(str1);
}
