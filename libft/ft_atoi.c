/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 21:02:54 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/27 20:52:30 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int x;
	int	sign;
	int res;

	x = 0;
	sign = 1;
	res = 0;
	while (str[x] == '\f' || str[x] == '\t' || str[x] == '\n'
			|| str[x] == '\v' || str[x] == '\r' || str[x] == ' ')
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign = sign * -1;
		x++;
	}
	while (str[x] && str[x] >= '0' && str[x] <= '9')
	{
		res = (res * 10) + (str[x] - 48);
		x++;
	}
	return (res * sign);
}
