/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcloves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:51:34 by hcloves           #+#    #+#             */
/*   Updated: 2019/10/31 23:12:10 by hcloves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_line(const int fd, char **line, char **str, char *temp)
{
	int i;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		temp = ft_strdup(str[fd] + i + 1);
		ft_strdel(&str[fd]);
		str[fd] = temp;
		return (1);
	}
	if (str[fd][i] == '\0')
	{
		if (i == 0)
			return (0);
		temp = ft_strsub(str[fd], 0, i);
		*line = temp;
		ft_strdel(&str[fd]);
		return (1);
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char *str[FD_MAX];
	char		buf[BUFF_SIZE + 1];
	char		*temp;
	int			info;

	if (fd < 0 || line == NULL || fd > FD_MAX - 1)
		return (-1);
	while ((info = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[info] = '\0';
		if (!str[fd])
			str[fd] = ft_strnew(0);
		temp = ft_strjoin(str[fd], buf);
		ft_strdel(&str[fd]);
		str[fd] = temp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (info < 0)
		return (-1);
	if (!str[fd])
		return (0);
	return (get_line(fd, line, str, temp));
}
