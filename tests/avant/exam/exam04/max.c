/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/23 12:59:31 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/23 13:35:52 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int				max;
	unsigned int	i;

	i = 0;
	if (tab == NULL)
		return (0);
	else
	{
		max = tab[0];
		while (i < len)
		{
			if (max < tab[i])
				max = tab[i];
			i++;
		}
		return (max);
	}
}
int	main(int ac, char **av)
{
	int		i;
	int		*tab;

	if (ac > 1)
	{
		i = 0;
		tab = (int *)malloc(sizeof(int) * (ac - 1));
		while (i < (ac - 1))
		{
			tab[i] = atoi(av[i + 1]);
			i++;
		}
		printf("%d", max(tab, ac - 1));
	}
	write(1, "\n", 1);
	return (0);
}

int main(void)
{
	int	tab[5] = {4, 7, 3, 5, 9};

	printf("%d\n", max(tab, 5));
	return (0);
}
