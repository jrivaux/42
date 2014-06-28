/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/02 10:12:41 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/02 12:50:44 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void		ft_create_str(char **line, char *av)
{
	int		i;
	char	*tab;

	i = 0;
	if (!(tab = (char *)malloc(sizeof(char) * (ft_strlen(av):) + 1)))
		return ;
	while (av[i] != '\0')
	{
		tab[i] = av[i];
		i++;
	}
	tab[i] = '\0';
	*line = tab;
}

int			main(int ac, char **av)
{
	char	*line;

	if (ac == 1)
		return (0);
	line = NULL;
	ft_create_str(&line, av[1]);
	printf("first line : %s\n", line);
	return (0);
}
