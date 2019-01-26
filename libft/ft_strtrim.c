/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 06:41:01 by muelfaha          #+#    #+#             */
/*   Updated: 2019/01/09 15:54:44 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		x;
	int		ln;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	ln = ft_strlen(s);
	while (s[ln - 1] == ' ' || s[ln - 1] == '\t' || s[ln - 1] == '\n')
		ln--;
	x = -1;
	while (s[++x] == ' ' || s[x] == '\t' || s[x] == '\n')
		ln--;
	if (ln <= 0)
		ln = 0;
	ptr = (char*)malloc(sizeof(char) * (ln + 1));
	if (ptr == NULL)
		return (NULL);
	s = s + x;
	x = -1;
	while (++x < ln)
		ptr[x] = *s++;
	ptr[x] = 0;
	return (ptr);
}
