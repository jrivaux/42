/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/02 16:52:32 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/02 18:02:43 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_inter2(char *s1, char *s2, char tab[128])
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
				tab[k] = s2[j];
				tab[k + 1] = '\0';
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
		ft_inter2(av[1], av[2], tab);
	write(1, "\n", 1);
	return (0);
}
