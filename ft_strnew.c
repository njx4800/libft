/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 18:25:54 by jxie              #+#    #+#             */
/*   Updated: 2018/07/15 18:28:44 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	char *new;

	new = (char *)malloc((size + 1) *sizeof(char));
	if(!new)
		return(NULL);
	ft_bzero(new, size + 1);
	return(new);
}
