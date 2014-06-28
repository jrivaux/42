/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 17:31:01 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/07 15:30:59 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>
#include "ft_sh.h"

int		ft_option(char *str, int *k)
{
	int	i;

	i = 1;
	while (str[i] == 'n')
		i++;
	if (str[i] == '\0')
	{
		*k = 1;
		return (0);
	}
	return (1);
}

void	ft_parser(char *str, int j)
{
	int	i;

	i = j;
	ft_charex(str, i);
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

void	ft_echo(char **tab)
{
	int		i;
	int		k;

	i = 1;
	k = 0;
	while (tab[i] && tab[i][0] == '-')
	{
		if (ft_option(tab[i], &k))
			break ;
		i++;
	}
	ft_seek_slash(tab);
	while (tab[i])
	{
		ft_putstr(tab[i]);
		if (tab[i + 1])
			ft_putstr(" ");
		i++;
	}
	if (!k)
		ft_putstr("\n");
}
