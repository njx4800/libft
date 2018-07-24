/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 22:46:34 by jxie              #+#    #+#             */
/*   Updated: 2018/07/24 14:23:26 by jxie             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strtrim(char const *s)
{
	char	*trim;
	int		first;
	int		last;
	int		i;

	if (!s)
		return (NULL);
	first = 0;
	last = ft_strlen(s) - 1;
	while (s[first] == ' ' || s[first] == '\n' || s[first] == '\t')
		first++;
	while (s[last] == ' ' || s[last] == '\n' || s[last] == '\t')
		last--;
	if (last - first < 0)
		return (ft_strnew(0));
	trim = ft_strnew(last - first + 1);
	if (!trim)
		return (NULL);
	i = first;
	while (i <= last)
	{
		trim[i - first] = s[i];
		i++;
	}
	return (trim);
}
