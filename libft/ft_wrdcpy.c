/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 15:24:20 by muelfaha          #+#    #+#             */
/*   Updated: 2019/01/09 17:31:48 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_wrdcpy(const char *str, char c, int *x)
{
	char	*arr;
	int		lcp;

	if (!(arr = (char *)malloc(sizeof(arr) * (ft_strlen(str)))))
		return (NULL);
	lcp = 0;
	while (str[*x] != c && str[*x])
	{
		arr[lcp] = str[*x];
		lcp++;
		*x = *x + 1;
	}
	arr[lcp] = '\0';
	while (str[*x] == c && str[*x])
		*x = *x + 1;
	return (arr);
}
