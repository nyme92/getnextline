/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 15:19:42 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/23 18:00:43 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*first;
	char	*second;
	size_t	x;

	x = 0;
	first = (char *)s1;
	second = (char *)s2;
	while (x < n)
	{
		if (first[x] != second[x])
			return ((unsigned char)first[x] - (unsigned char)second[x]);
		x++;
	}
	return (0);
}
