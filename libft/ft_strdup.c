/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:46:45 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/24 05:37:03 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		x;
	int		y;
	char	*s2;

	x = 0;
	y = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (y + 1));
	if (s2 == NULL)
		return (NULL);
	while (x < y)
	{
		s2[x] = s1[x];
		x++;
	}
	s2[x] = '\0';
	return (s2);
}
