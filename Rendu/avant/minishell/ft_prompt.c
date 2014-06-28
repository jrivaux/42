/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prompt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 16:34:05 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/01 14:59:47 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>
#include "ft_sh.h"

char		**ft_path(char **env)
{
	char	**path;
	int		i;

	i = 0;
	while (env[i])
	{
		if (!ft_strncmp("PATH=", env[i], 4))
		{
			path = ft_strsplit(env[i] + 5, ':');
		}
		i++;
	}
	return (path);
}

char		*ft_strtrijoin(char *s1, char *s2, char *s3)
{
	char	*tmp;
	char	*s4;

	tmp = ft_strjoin(s1, s2);
	s4 = ft_strjoin(tmp, s3);
	free(tmp);
	return (s4);
}

void		ft_env(char **env)
{
	while (*env)
		ft_putendl(*env++);
}

void		ft_prompt(char **env, char **path)
{
	char	*line;
	char	**cmd;

	write(1, "$>", 2);
	while (get_next_line(0, &line))
	{
		cmd = ft_strsplit(line, ' ');
		if (ft_strcmp(cmd[0], "exit") == 0)
			ft_exit(0);
		else if (ft_strcmp(cmd[0], "cd") == 0)
			ft_cd(cmd[1], env);
		else if (ft_strcmp(cmd[0], "env") == 0)
			ft_env(env);
		else if (ft_strcmp(cmd[0], "echo") == 0)
			ft_echo(cmd);
		else
			ft_prompt2(path, cmd, &env);
		write(1, "$>", 2);
	}
}

void		ft_prompt2(char **path, char **cmd, char ***env)
{
	int		i;
	pid_t	father;

	if (ft_strcmp(cmd[0], "setenv") == 0)
		*env = ft_setenv2(cmd, i, *env);
/*	else if (ft_strcmp(cmd[0], "unsetenv") == 0)
	ft_unsetenv(cmd, env);*/
	else
		father = fork();
	if (father == 0)
	{
		i = 0;
		while (path[i] != NULL)
		{
			execve(ft_strtrijoin(path[i], "/", cmd[0]), cmd, *env);
			i++;
		}
		write(1, "nop\n", 4);
		ft_exit(0);
	}
	else
		wait(NULL);
}
