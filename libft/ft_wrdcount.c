/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 15:23:51 by muelfaha          #+#    #+#             */
/*   Updated: 2019/01/09 17:32:15 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wrdcount(const char *str, char del)
{
	int	wc;
	int	lc;

	lc = 0;
	wc = 0;
	if (!str)
		return (0);
	while (str[lc])
	{
		if (str[lc] == del && str[lc + 1] != del)
			wc++;
		lc++;
	}
	if (str[0] != '\0')
		wc++;
	return (wc);
}
