/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:41:57 by jxie              #+#    #+#             */
/*   Updated: 2018/07/24 14:22:06 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *new;

	new = (char*)malloc(sizeof(char) * 2);
	if (!new)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n >= 0 && n <= 9)
	{
		new[0] = n + '0';
		new[1] = '\0';
	}
	else if (n < 0)
	{
		new[0] = '-';
		new[1] = '\0';
		n = -n;
		new = ft_strjoin(new, ft_itoa(n));
	}
	else if (n >= 10)
		new = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	return (new);
}
