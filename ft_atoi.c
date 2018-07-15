/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:03:29 by jxie              #+#    #+#             */
/*   Updated: 2018/07/15 15:48:22 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	long sign;
	long num;

	while(ft_isspace(*str))
		str++;
	if(*str == '-')
	{
		sign = -1;
		str++;
	}
	else if(*str == ' ')
	{
		sign = 1;
		str++;
	}
	while(ft_isdigit(*str))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return(sign * num);
}
