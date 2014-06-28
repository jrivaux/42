/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/04 17:03:47 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/06 17:59:17 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_revers(char *str)
{
	int		i;
	int		k;
	char	*s2;

	k = 0;
	i = ft_strlen(str);
	if (!(s2 = (char *)malloc(sizeof(char) * ft_strlen(str))))
		return (NULL);
	while (str[i])
	{
		s2[k] = str[i];
		i--;
		k++;
	}
	ft_putstr(s2);
	return (s2);
}

void	ft_mix(char *str)
{
	char	*tab;
	char	*s2;

	if (!(tab = (char *)malloc(sizeof(char) * ft_strlen(str))))
		return (NULL);
	s2 = ft_revers(str);
	while ()
	{

	}
}
int		main(int ac, char **av)
{
	if (ac == 2)
		ft_mix(av[1]);
	write(1, "\n", 1);
	return (0);
}
