/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 23:06:24 by jxie              #+#    #+#             */
/*   Updated: 2018/07/15 15:35:22 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <errno.h>

char *ft_strdup(const char *str1)
{
	char *sdup;

	sdup = (char *)malloc(sizeof (char) *(ft_strlen(str1) + 1));

	if (!sdup)
	{
		errno = ENOMEM;
		return(NULL);
	}
	ft_strcpy(sdup, str1);

	return(sdup);
}
