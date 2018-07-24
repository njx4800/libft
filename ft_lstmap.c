/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 22:23:21 by jxie              #+#    #+#             */
/*   Updated: 2018/07/22 11:15:53 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *nlst;

	if (lst == NULL && f == NULL)
		return (NULL);
	while (lst)
	{
		nlst = f(lst);
		if (!nlst && !lst->next)
			return (NULL);
		if (nlst)
		{
			nlst->next = ft_lstmap(lst->next, f);
			return (nlst);
		}
	}
	return (NULL);
}
