/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muelfaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 19:09:26 by muelfaha          #+#    #+#             */
/*   Updated: 2019/01/25 15:36:03 by muelfaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/libft.h"
# include <fcntl.h>
# define BUFF_SIZE 69

int		get_next_line(const int fd, char **line);
int		readline(int fd, char **buffer);
int		tobuff(int fd, char **wholebuff, char **eachline);

#endif
