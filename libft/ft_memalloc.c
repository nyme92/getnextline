/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 17:45:26 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/19 19:04:14 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	str = NULL;
	if (size)
	{
		if (!(str = (char*)malloc(sizeof(char) * (size))))
			return (NULL);
		while (size > 0)
		{
			size--;
			str[size] = 0;
		}
	}
	return ((void *)str);
}
