/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 16:59:45 by muelfaha          #+#    #+#             */
/*   Updated: 2019/01/09 17:57:09 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *all, const char *within, size_t x)
{
	size_t hay;
	size_t need;

	if (within[0] == '\0')
		return ((char *)all);
	hay = 0;
	while ((hay < x) && all[hay] != '\0')
	{
		need = 0;
		while (within[need] != '\0')
		{
			if ((hay + need) >= x || all[hay + need] != within[need])
				break ;
			need++;
		}
		if (within[need] == '\0')
			return ((char *)(all + hay));
		hay++;
	}
	return (0);
}
