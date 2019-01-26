/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 12:35:39 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/10 23:32:21 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c)
			y = x;
		x++;
	}
	if (s[x] == '\0' && c == 0)
		return ((char*)s + x);
	if (y > 0 || ((y == 0) && (s[y] == c)))
		return ((char*)s + y);
	return (NULL);
}
