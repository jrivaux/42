/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/15 17:02:01 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/16 18:39:07 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') ||
					(str[i] >= 'A' && str[i] <= 'Z') ||
					(str[i] >= '0' && str[i] <= '9')))
			j = 0;
		else if ((j == 0) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			j = 1;
			str[i] = str[i] - 32;
		}
		else if ((j == 1) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else
			j = 1;
		i++;
	}
	ft_putstr(str);
}

int		main(int ac, char **av)
{
	int	i;
	i = 0;
	if (ac > 1)
	{
		ft_strcapitalize(av[1]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

