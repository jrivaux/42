/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/19 14:30:31 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/19 15:45:54 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	tab = (int *)malloc(sizeof(int) * (max - min));
	while (i != max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int	main(int ac, char **av)
{
	int	*tab;
	int	i;

	i = 0;
	if (ac == 3)
	{
		tab = ft_range(atoi(av[1]), atoi(av[2]));
		while (i != (atoi(av[2]) - (atoi(av[1]))))
		{
			printf("%d", tab[i]);
			i++;
		}
	}
	return (0);
}
