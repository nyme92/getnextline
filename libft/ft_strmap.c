/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 12:00:30 by muelfaha          #+#    #+#             */
/*   Updated: 2019/01/05 13:34:29 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		x;
	char		*new;

	if (!s)
		return (NULL);
	if (!(new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	x = 0;
	while (s[x])
	{
		new[x] = (f)(s[x]);
		x++;
	}
	new[x] = '\0';
	return (new);
}
