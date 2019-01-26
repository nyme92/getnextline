/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 12:38:43 by muelfaha          #+#    #+#             */
/*   Updated: 2019/01/05 13:44:13 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*new;

	if (!s)
		return (NULL);
	if (!(new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	x = 0;
	while (s[x])
	{
		new[x] = f(x, s[x]);
		x++;
	}
	new[x] = '\0';
	return (new);
}
