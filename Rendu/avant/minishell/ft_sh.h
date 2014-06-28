/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 14:09:10 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/02 16:15:13 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SH_H
# define FT_SH_H

int		ft_tablen(char **str);
int		main(int ac, char **av, char **environ);
void	ft_prompt(char **str, char **path);
char	**ft_path(char **str);
void	ft_exit(int status);
void	ft_cd(char *path, char **env);
void	ft_cd2(int i, char *path, char **env);
void	ft_prompt2(char **path, char **cmd, char ***env);
void	ft_env(char **env);
void	ft_setenv(char **cmd, char **env);
char	**ft_setenv2(char **cmd, int i, char **env);
void	ft_echo(char **tab);

#endif /*FT_SH_H */
