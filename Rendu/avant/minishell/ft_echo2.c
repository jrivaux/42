/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/01 14:04:24 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/07 15:02:23 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>
#include "ft_sh.h"

void	ft_echo(char **tab)
{
	int	i;

	i = 1;
	if (tab[1])
	{
		ft_seek_slash(tab);
		while (tab[i] != NULL)
		{
			write (1, tab[i], ft_strlen(tab[i]));
			write (1, " ", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

void	ft_seek_slash(char **tab)
{
	int	i;
	int	j;

	i = 1;
	while (tab[i] != NULL)
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '\\')
				ft_parser(tab[i], j);
			j++;
		}
		i++;
	}
}

void	ft_option(char *str, int i)
{
	if (str[i + 1] == '\\')
	{
		i++;
		if (str[i + 1] == 'n')
			str[i + 1] = '\n';
		else if (str[i + 1] == 'a')
			str[i + 1] = '\a';
		else if (str[i + 1] == 'b')
			str[i + 1] = '\b';
		else if (str[i + 1] == 'c')
			str[i + 1] = 0;
		else if (str[i + 1] == 'e' || str[i + 1] == 'E')
			str[i + 1] = 27;
		else if (str[i + 1] == 'f')
			str[i + 1] = '\f';
		else if (str[i + 1] == 'r')
			str[i + 1] = '\r';
		else if (str[i + 1] == 't')
			str[i + 1] = '\t';
		else if (str[i + 1] == 'v')
			str[i + 1] = '\v';
	}
}

void	ft_parser(char *str, int j)
{
	int	i;

	i = j;
	ft_option(str, i);
	if (str[i + 1] == '\\')
	{
		while (str[i] != '\0')
		{
			str[i] = str[i + 2];
			i++;
		}
		str[i] = 0;
	}
	else
	{
		while (str[i] != '\0')
		{
			str[i] = str[i + 1];
			i++;
		}
		str[i] = 0;
	}
}
