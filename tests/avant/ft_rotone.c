/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/17 10:24:15 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/17 10:50:18 by jrivaux          ###   ########.fr       */
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

char	*ft_rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (122 > str[i] && str[i] >= 97)
			str[i] = str[i] + 1;
		if (str[i] == 122)
			str[i] = 97;
		if (90 > str[i] && str[i] >= 65)
			str[i] = c + 1;
		if (str[i] == 90)
			str[i] = 65;
		i++;
	}
	ft_putstr(str);
	return (str);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
		ft_rotone(av[1]);
	ft_putstr("\n");
	return (0);
}
