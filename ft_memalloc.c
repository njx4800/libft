/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 18:18:08 by jxie              #+#    #+#             */
/*   Updated: 2018/07/22 22:02:21 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *m;

	m = (void*)malloc(size);
	if (!m)
		return ((void*)0);
	ft_bzero(m, size);
	return (m);
}
