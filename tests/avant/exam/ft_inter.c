/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/01 17:00:23 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/02 16:52:07 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_inter(char *s1, char *s2, char tab[128])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	tab[0] = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			k = 0;
			while (s2[j] != tab[k] && tab[k] != '\0' && s1[i] == s2[j])
				k++;
			if (tab[k] == '\0' && s1[i] == s2[j])
			{
				ft_putchar(s2[j]);
				tab[k] = s2[j];
				tab[k + 1] = 0;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	char	tab[128];
	int	i;

	i = 0;
	if (ac == 3)
		ft_inter(av[1], av[2], tab);
	ft_putchar('\n');
	return (0);
}
