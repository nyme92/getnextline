/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:46:23 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/12 15:47:49 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	x;

	x = 0;
	str = (char *)s;
	while (x < n)
	{
		if ((unsigned char)str[x] == (unsigned char)c)
			return ((char *)s + x);
		x++;
	}
	return (NULL);
}
