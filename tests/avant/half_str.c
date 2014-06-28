/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/17 14:31:46 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/17 16:42:06 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	half_str(char **tab)
{
	int	i;
	int	j;

	i = 1;
	while (tab[i]) 
	{
		j = 0;
		while (tab[i][j])
		{
			if (j % 2 == 0)
				write(1, &tab[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
		half_str(av);
	else
		write(1, "\n", 1);
	return (0);
}
