/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 10:59:51 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/12 14:42:00 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	x;
	char	*copy;
	char	*final;

	x = 0;
	copy = (char *)src;
	final = (char *)dst;
	while (x < n)
	{
		final[x] = copy[x];
		x++;
	}
	return (dst);
}
