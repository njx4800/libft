/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wdcount.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 18:52:17 by jxie              #+#    #+#             */
/*   Updated: 2018/07/24 13:39:10 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wdlen(char *str, char c)
{
	int wl;

	wl = 0;
	while (*str != '\0' && *str != c)
	{
		wl++;
		str++;
	}
	return (wl);
}
