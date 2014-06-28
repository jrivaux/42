/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 17:56:01 by jrivaux           #+#    #+#             */
/*   Updated: 2014/05/11 18:12:54 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_search_line(char **tmp, char **line)
{
	size_t	i;
	char	*newline;
	char	*newrest;

	newline = NULL;
	newrest = NULL;
	i = 0;
	while (tmp[0] && tmp[0][i] != '\n' && tmp[0][i] != '\0')
		i++;
	if (tmp[0] && tmp[0][i] == '\n')
	{
		newline = ft_strsub(*tmp, 0, i);
		*line = newline;
		newrest = ft_strsub(*tmp, i + 1, ft_strlen(*tmp) - i);
		ft_memdel((void **)tmp);
		*tmp = newrest;
		return (1);
	}
	else
		return (0);
}

int			ft_end(char **line, char **tmp, char **tmpbuf)
{
	ft_strdel(tmpbuf);
	if (ft_search_line(tmp, line) == 0)
	{
		if (!(*line = ft_strdup(*tmp)))
			return (-1);
		ft_memdel((void **)tmp);
	}
	return (1);
}

int			ft_deltmpbuf(char **tmpbuf)
{
	ft_strdel(tmpbuf);
	return (1);
}

static int	ft_read(int fd, char **tmp, char **line)
{
	char	*join;
	char	*tmpbuf;
	int		ret;

	ret = 1;
	if (!(tmpbuf = (char *)ft_memalloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (-1);
	while ((ret = read(fd, tmpbuf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		if (!(join = ft_strjoin(*tmp, tmpbuf)))
			return (-1);
		ft_memdel((void	**)tmp);
		*tmp = join;
		if (ret < BUFF_SIZE)
			return (ft_end(line, tmp, &tmpbuf));
		else if (ft_search_line(tmp, line) == 1)
			return (ft_deltmpbuf(&tmpbuf));
		ft_strclr(tmpbuf);
	}
	*line = ft_strdup(*tmp);
	ft_memdel((void **)tmp);
	return (*line && **line ? 1 : 0);
}

int			get_next_line(int fd, char **line)
{
	static char	*tmp = NULL;

	if (fd < 0)
		return (-1);
	if (tmp)
	{
		if (ft_search_line(&tmp, line) == 0)
			return (ft_read(fd, &tmp, line));
		return (1);
	}
	return (ft_read(fd, &tmp, line));
}
