/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotone2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/25 15:00:19 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/30 09:01:04 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i] != '\0') // temps que je ne suis pas a la fin de ma chaine 
	{
		if (str[i] >= 'a' && str[i] <= 'y') // si je suis entre un a et un y
			c = str[i] + 1; // je passe a la lettre suivante
		else if (str[i] == 'z') // si non si je suis sur un z
			c = 'a'; // mon caractere devient a
		else if (str[i] >= 'A' && str[i] <= 'Y') // si non si je suis entre A et Z
			c = str[i] + 1; // je passe a la lettre suivante
		else if (str[i] == 'Z')// si non si je suis sur un Z
			c = 'A';// mon caractere devient un A
		i++;// j'avance dans ma chaine
		write(1, &c, 1); // j'ecris mon caractere
	}
}

int	main(int ac, char **av)
{
	if (ac > 1) // si j'ai plus d'un argument
		ft_rotone(av[1]);// je fais ft_rotone sur le premier argument
	write(1, "\n", 1);// 
	return (0);
}
