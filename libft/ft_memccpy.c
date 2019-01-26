/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 23:58:30 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/17 10:09:22 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int x, size_t n)
{
	size_t ptr;

	ptr = 0;
	while (ptr < n)
	{
		((char *)dst)[ptr] = ((char *)src)[ptr];
		if (((unsigned char *)src)[ptr] == (unsigned char)x)
			return (dst + ptr + 1);
		ptr++;
	}
	return (NULL);
}
