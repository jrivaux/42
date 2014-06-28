/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 14:09:00 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/01 14:40:47 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <libft.h>
#include "ft_sh.h"

int		ft_tablen(char **str)
{
	int		i;

	i = 0;
	while (str[i] != NULL)
		i++;
	return (i);
}

int		main(int ac, char **av, char **environ)
{
	char	**str;
	char	**path;
	int		i;

	(void)ac;
	(void)av;
	str = (char **) malloc(sizeof(char*) * (ft_tablen(environ) + 1));
	i = 0;
	while (environ[i] != 0)
	{
		str[i] = ft_strdup(environ[i]);
		i++;
	}
	path = ft_path(str);
	ft_prompt(str, path);
	return (0);
}
