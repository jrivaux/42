/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/04 14:48:27 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/04 16:40:51 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_xor(char *s1, char *s2, char tab[128])
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
			while (s1[i] != tab[k] && s2[j] != tab[k] && tab[k] != '\0')
				k++;
			if (s1[i] != s2[j] && tab[k] == '\0')
			{
				tab[k] = s1[i];
				tab[k + 1] = 0;
				ft_putchar(tab[k]);
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	char	tab[128];
	if (ac == 3)
		ft_xor(av[1], av[2], tab);
	write (1, "\n", 1);
	return (0);
}
