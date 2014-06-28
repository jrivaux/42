/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/17 16:49:03 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/17 18:08:35 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		n;
	char	c;

	i = 0;
	n = ft_strlen(str) - 1;
	while (str[i] && i < n)
	{
		c = str[i];
		str[i] = str[n];
		str[n] = c;
		n--;
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_strrev(av[1]);
		write(1, av[1], ft_strlen(av[1]));
	}
	write(1, "\n", 1);
	return (0);
}
