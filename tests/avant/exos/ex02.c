/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/04 11:42:06 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/04 11:42:46 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_create_str(char **line, char *av)

void		ft_modif_str(char **line, char *av)

int			main(int ac, char **av)
{
	char	*line;
	int		i;

	i = 2;
	if (ac < 3)
		return (0);
	line = NULL;
	ft_create_str(&line, av[1]);
	printf("first line : %s\n", line);
	while (i < ac)
	{
		ft_modif_str(&line, av[i]);
		printf("line %d : %s\n", i, line);
		i++;
	}
	return (0);
}
