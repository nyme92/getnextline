/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 12:50:44 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/19 18:32:28 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char *str1;
	char *str2;

	if (s1 && s2)
	{
		str1 = (char *)s1;
		str2 = (char *)s2;
		while (n--)
		{
			if (*str1 != *str2)
				return (0);
			str1++;
			str2++;
		}
		return (1);
	}
	return (0);
}
