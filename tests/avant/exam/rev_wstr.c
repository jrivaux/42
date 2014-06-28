/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 14:13:12 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/22 15:17:23 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
void	rev_wstr(char *str)
{
	int	i;
	int	j;

	i = ft_strlen(str) - 1;
	while (str[i])
	{
		j = 0;
		if (str[i] == ' ' || str[i] == '\t')
		{
			j = i + 1;
			while (str[j] != '\0' && str[j] != ' ')
			{
				write(1, &str[j], 1);
				j++;
			}
			write(1, " ", 1);
		}
		i--;
	}
	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
