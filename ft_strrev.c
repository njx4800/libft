/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 21:30:57 by jxie              #+#    #+#             */
/*   Updated: 2018/07/20 23:29:55 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	char	*tmp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	tmp = (char *)malloc(sizeof(char*));
	while ((len - 1) < i)
	{
		tmp = &s[i];
		s[i] = s[len - 1];
		s[len - 1] = *tmp;
		i++;
		len--;
	}
	return (s);
}
