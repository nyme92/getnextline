/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 12:06:33 by muelfaha          #+#    #+#             */
/*   Updated: 2019/01/09 17:31:36 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *str, char del)
{
	int		ltrctr;
	int		wrdctr;
	int		wrd;
	char	**s;

	ltrctr = 0;
	wrdctr = 0;
	wrd = ft_wrdcount(str, del);
	if (!str)
		return (NULL);
	if (!(s = (char **)malloc(sizeof(s) * (ft_wrdcount(str, del) + 2))))
		return (NULL);
	while (str[ltrctr] == del && str[ltrctr])
		ltrctr++;
	while (wrdctr < wrd && str[ltrctr])
	{
		s[wrdctr] = ft_wrdcpy(str, del, &ltrctr);
		wrdctr++;
	}
	s[wrdctr] = NULL;
	return (s);
}
