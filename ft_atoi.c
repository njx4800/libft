/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:03:29 by jxie              #+#    #+#             */
/*   Updated: 2018/07/22 20:26:40 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long	sign;
	long long	num;
	size_t		i;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		if (str[i] == '-' && str[i + 1] == '+')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num *= 10;
		num += (long long)(str[i] - '0');
		i++;
	}
	return ((int)(sign * num));
}
