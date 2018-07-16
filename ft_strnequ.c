/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 19:16:57 by jxie              #+#    #+#             */
/*   Updated: 2018/07/15 19:21:07 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if(s1 == '\0' || s2 == '\0')
		return((int)NULL);
	return(ft_strncmp(s1, s2, n) == 0 ? 1 : 0);
}