/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 16:46:24 by muelfaha          #+#    #+#             */
/*   Updated: 2018/12/10 23:36:24 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int hay;
	int need;

	hay = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[hay] != '\0')
	{
		need = 0;
		while (haystack[hay] == needle[need] && haystack[hay] != '\0')
		{
			hay++;
			need++;
		}
		if (needle[need] == '\0')
			return ((char *)&haystack[hay - need]);
		hay = (hay - need) + 1;
	}
	return (NULL);
}
