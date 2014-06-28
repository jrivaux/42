/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/17 15:10:25 by jrivaux           #+#    #+#             */
/*   Updated: 2014/06/12 11:41:54 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			j = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = j;
			i = 0;
		}
		else
			i++;
	}
}

int	main()
{
	int	i;
	int		tab[5] = {4, -5, 2, 2, 1};

	i = 0;
	sort_int_tab(tab, 4);
	while (tab && i < 4)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
