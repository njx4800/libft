/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 18:56:36 by jxie              #+#    #+#             */
/*   Updated: 2018/07/15 19:07:21 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	size_t len;
	char *new;
	
	len = 0;
	if(s == NULL || f == NULL)
		return(NULL);
	new = ft_strnew(ft_strlen(s));
	if(!new)
		return(NULL);
	while(*s)
	{
		new[len] = f(len, s[len + 1]);
		len++;
	}
	return(new);
}
