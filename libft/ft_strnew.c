/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 18:23:38 by muelfaha          #+#    #+#             */
/*   Updated: 2019/01/09 17:25:39 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	x;

	str = (char*)malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (NULL);
	x = 0;
	while (x < (size + 1))
	{
		str[x] = '\0';
		x++;
	}
	return (str);
}
