/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 13:57:31 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/20 08:41:32 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	*tab;

	i = 0;
	if (end >= start)
	{
		if (!(tab = (int *)malloc(sizeof(int) * (end - start + 1))))
			return (NULL);
		while (i != (end - start + 1))
		{
			tab[i] = start + i;
			i++;
		}
	}
	if (start > end)
	{
		if (!(tab = (int *)malloc(sizeof(int) * (start - end + 1))))
			return (NULL);
		while (i < (start - end + 1))
		{
			tab[i] = start - i;
			i++;
		}
	}
	return (tab);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	*tab;
	int	i;

	a = atoi(av[1]);
	b = atoi(av[2]);
	tab = ft_range(a, b);
	i = 0;
	if (ac == 3)
	{
		while (tab && i < abs(a - b) + 1)
		{
			printf("%d\n", tab[i]);
			i++;
		}
		return (0);
	}
}
