/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 18:25:49 by muelfaha          #+#    #+#             */
/*   Updated: 2019/01/03 19:44:52 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		x;
	int		y;

	x = 0;
	y = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	{
		if (str == NULL)
			return (NULL);
		while (s1[x] != '\0')
		{
			str[x] = s1[x];
			x++;
		}
		while (s2[y] != '\0')
		{
			str[x + y] = s2[y];
			y++;
		}
		str[x + y] = '\0';
		return (str);
	}
}
