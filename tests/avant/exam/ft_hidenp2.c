/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hidenp2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/25 16:39:37 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/26 10:13:02 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_hidenp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i])
		write(1, "0", 1);
	else
		write(1, "1", 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_hidenp(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
