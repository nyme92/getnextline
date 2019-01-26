/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 00:58:24 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/12 14:40:27 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	x;
	char	*tbc;
	char	*fc;

	if (src == dest)
		return (dest);
	tbc = (char *)src;
	fc = (char *)dest;
	if (src < dest)
	{
		x = n;
		while (x-- > 0)
			fc[x] = tbc[x];
	}
	else
	{
		x = 0;
		while (x < n)
		{
			fc[x] = tbc[x];
			x++;
		}
	}
	return (dest);
}
