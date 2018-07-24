/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:58:01 by jxie              #+#    #+#             */
/*   Updated: 2018/07/22 10:55:56 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del) (void*, size_t))
{
	t_list *new;

	if (!alst || !del)
		return ;
	while (*alst)
	{
		new = (*alst)->next;
		ft_lstdelone(alst, del);
		(*alst) = new;
	}
	(*alst) = NULL;
}
