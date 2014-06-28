/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hidenp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/17 10:55:48 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/30 09:01:08 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hidenp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j]) // tant que s1 et s2 existent
	{
		if (s1[i] == s2[j]) // si on trouve s1 dans s2
				i++;// on avance s1 d'un cran
			j++; // on se deplace dans j
	}
	if (s1[i]) // si on est encore sur s1 c'est que tous les caracteres n'ont pas etes trouves
		write(1, "0\n", 2);// donc on renvoie 0
	else
		write(1, "1\n", 2);// si non c'est qu'on a tout trouve donc on renvoie 1
}

int	main(int ac, char **av)
{
	if (ac == 3) // si on a 3 arguments
		ft_hidenp(av[1], av[2]);// 
	write(1, "\n", 1);
	return (0);
}
