/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 15:52:55 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/15 17:55:16 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		search(char *str, int	i)
{
	while ((str[i] == ' ' || str[i] == '\t') && (str[i] != '\0'))
		i++;
	return (i);
}

void	epur_str(char *str)
{
	int	i;

	i = search(str, 0);
	while (str[i])
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
		i = search(str, i);
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			write(1, " ", 1);
	}
}
int	main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write (1, "\n", 1);
	return (0);
}
