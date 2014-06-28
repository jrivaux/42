/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/31 14:38:21 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/01 11:16:17 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_rotx(char *str, int x)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) // si je suis entre a et z ou A et Z
		{
			if ((c + x % 26) <= 'z')
				c = str[i] + (x % 26); //j'augmente la valeur
			else
				c = 'a' + (x % 26) - ('z'- c) - 1; 
		}
		write(1, &c, 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_rotx(argv[1], atoi(argv[2]));
	write(1, "\n", 1);
	return (0);
}
