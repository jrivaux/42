/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shell.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 16:27:10 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/01 14:40:24 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include "ft_sh.h"
#include <libft.h>

void		ft_exit(int status)
{
	exit(status);
}

void		ft_cd(char *path, char **env)
{
	int		i;
	char	*old;

	i = 0;
	old = ft_strjoin("OLDPWD=", getcwd(NULL, 2048));
	if (path && ft_strcmp(path, "-") == 0)
	{
		while (ft_strncmp("OLDPWD=", env[i], 6))
			i++;
		chdir(env[i] + 7);
	}
	i = 0;
	while (ft_strncmp("OLDPWD=", env[i], 6))
		i++;
	ft_strdel(&env[i]);
	env[i] = old;
	i = 0;
	if(!path)
	{
		while (ft_strncmp("HOME=", env[i], 4))
			i++;
		chdir(env[i] + 5);
	}
	else
		ft_cd2(i, path, env);
}

void		ft_cd2(int i, char *path, char **env)
{
	if (ft_strcmp(path, "-") != 0)
		chdir(path);
	i = 0;
	while (ft_strncmp("PWD=", env[i], 3))
		i++;
	ft_strdel(&env[i]);
	env[i] = ft_strjoin("PWD=", getcwd(NULL, 2048));
}

char		**ft_strtab(char **tab)
{
	int		i;
	char	**tab2;

	i = 0;
	while(tab[i] != NULL)
		i++;
	tab2 = (char **)malloc(sizeof(char *) * (i + 2));
	tab2[i + 1] = NULL;
	tab2[i] = NULL;
	i = 0;
	while (tab[i] != NULL)
	{
		tab2[i] = tab[i];
		i++;
	}
	return (tab2);
}

void		ft_setenv(char **cmd, char **env)
{
	int		i;
	int		j;
	char	**tab;

	tab = ft_strtab(env);
	i = 0;
	if (!cmd[1])
		ft_env(env);
	else
	{
		if (cmd[2])
			j = (ft_strlen(cmd[1]) + ft_strlen(cmd[2]) + 1);
		else
			j = (ft_strlen(cmd[1] + 1));
//		ft_setenv2(cmd, i, env);
	}	
}

char		**ft_setenv2(char **cmd, int i, char **env)
{
	int		k;
	char	**tab;
	char	*tmp;

	ft_setenv(cmd, env);
	k = 0;
	tab = ft_strtab(env);
	while (env[i])
	{
		if (!ft_strncmp(cmd[1], env[i], ft_strlen(cmd[1] + 1)))
		{
			k = 1;
			break ;
		}
		i++;
	}
		if (k == 1)
			ft_strdel(&env[i]);
		if (cmd[2])
			tmp = ft_strjoin(cmd[1], cmd[2]);
		else
			tmp = ft_strdup(cmd[1]);
		tab[i] = tmp;
		return (tab);
}
