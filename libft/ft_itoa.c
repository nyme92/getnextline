/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 22:51:55 by muelfaha          #+#    #+#             */
/*   Updated: 2019/01/03 00:02:54 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int nb)
{
	char	*str;
	long	y;
	int		z;

	y = nb;
	z = ft_negmod(y);
	if (!(str = (char *)malloc(sizeof(char) * (z + 1))))
		return (NULL);
	str[z--] = '\0';
	if (y == 0)
	{
		str[0] = 48;
	}
	if (y < 0)
	{
		str[0] = '-';
		y = -y;
	}
	while (y > 0)
	{
		str[z] = y % 10 + 48;
		y = y / 10;
		z--;
	}
	return (str);
}
