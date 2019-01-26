/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 19:02:09 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/10 23:47:08 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int x;

	x = 0;
	while (s1[x] && s2[x] && (unsigned char)s1[x] == (unsigned char)s2[x] \
			&& x < n)
		x++;
	if (x == n)
		return (0);
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
