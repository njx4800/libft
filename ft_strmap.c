/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 18:47:25 by jxie              #+#    #+#             */
/*   Updated: 2018/07/15 19:06:59 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	char *new;
	size_t len;

	len = 0;
	if(s == NULL || f == NULL)
		return(NULL);
	new = ft_strnew(ft_strlen(s));
	if(new == NULL)
		return(NULL);
	while(*s)
	{
		new[len] = f(s[len]);
		len++;
	}
	return(new);
}
