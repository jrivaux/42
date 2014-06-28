/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/01 13:23:37 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/01 13:49:21 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

:void	ft_ulstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			c = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			c = str[i] + 32;
		i++;
	}
	ft_putstr(str);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_ulstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
