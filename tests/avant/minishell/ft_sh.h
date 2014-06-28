/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 14:09:10 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/14 14:46:43 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SH_H
# define FT_SH_H

int		ft_tablen(char **str);
int		main(int ac, char **av, char **environ);
void	ft_prompt(char **str, char **path);
char	**ft_path(char **str);
	
#endif /*FT_SH_H */
