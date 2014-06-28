/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prompt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 16:34:05 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/14 15:05:27 by jrivaux          ###   ########.fr       */
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
		write(1, env[i], 5);
		if (!ft_strncmp("PATH=", env[i], 4))
		{
			ft_putendl("ok");
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

void		ft_prompt(char **env, char **path)
{
	char	*line;
	pid_t	father;
	char	**cmd;
	int		i;

	write(1, "$>", 2);
	while (get_next_line(0, &line))
	{
		i = 0;
		cmd = ft_strsplit(line, ' ');
		father = fork();
		if (father == 0)
		{
			while (path[i] != NULL)
			{
				ft_putendl(ft_strtrijoin(path[i], "/", cmd[0]));
				execve(ft_strtrijoin(path[i], "/", cmd[0]), cmd, env);
				i++;
			}
			exit(0);
		}
		else
			wait(NULL);
		write(1, "$>", 2);
	}
}
