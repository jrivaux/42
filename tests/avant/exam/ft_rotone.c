/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/17 10:24:15 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/17 14:06:59 by jrivaux          ###   ########.fr       */
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
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_rotone(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (str[i] <= 'y' && str[i] >= 'a')
			c = str[i] + 1;
		else if (str[i] == 'z')
			c = 'a';
		else if (str[i] <= 'Y' && str[i] >= 'A')
			c = str[i] + 1;
		else if (str[i] == 'Z')
			c = 'A';
		write(1, &c, 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_rotone(av[1]);
	}
	ft_putstr("\n");
	return (0);
}
