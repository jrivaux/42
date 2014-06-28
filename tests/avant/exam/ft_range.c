/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/21 18:13:09 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/07 10:29:13 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int	*tab;
	int	i;

	i = 0;
	if (end > start)
	{
		if (!(tab = (int *)malloc(sizeof(int) * ((end - start) + 1))))
			return (NULL);
		while (i != (end - start + 1))
		{
			tab[i] = start + i;
			i++;
		}
	}
	if (start > end)
	{
		if (!(tab = (int *)malloc(sizeof(int) * ((start - end) + 1))))
			return (NULL);
		while (i != (start - end + 1))
		{
			tab[i] = start - i;
			i++;
		}
	}
	return (tab);
}


int main(int ac, char **av)
{
	int		a;
	int		b;
	int		*tab;
	int		i;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		tab = ft_range(a, b);
		i = 0;
		while (tab && i < abs(a - b) + 1)
		{
			printf("%d\n", tab[i]);
			i++;
		}
	}
	return (0);
}
