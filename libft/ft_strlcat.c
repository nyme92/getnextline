/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:56:37 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/07 11:07:22 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t source;
	size_t dest;
	size_t i;

	source = ft_strlen(src);
	dest = ft_strlen(dst);
	i = 0;
	if (dest > dstsize)
		return (dstsize + source);
	while (src[i] && dest + i + 1 < dstsize)
	{
		dst[dest + i] = src[i];
		i++;
	}
	dst[dest + i] = '\0';
	return (dest + source);
}
