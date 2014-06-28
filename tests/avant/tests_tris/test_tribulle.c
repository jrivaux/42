/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tribulle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/04 13:06:20 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/06 16:52:31 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i; // je cree mon compteur
	int	tmp; // je cree ma variable temporaire
	int tab[argc - 1];// je cree un tableau d'int qui contiendra mes arguments moins le nom de l'executable

	i = 1;
	tmp = 0;
	while (argv[i] != '\0') // temps que je ne suis pas a la fin de mes arguments
	{
		tab[i - 1] = ft_atoi(argv[i]); // je transforme mes int en char
		i++; // j'avance
	}
	i = 0; // je reviens au debut
	if (argc > 1) // si j'ai des arguments
	{
		while (i < argc - 2) // temps aue j'ai des arguments (moins le dernier car on ne veut pas qu'il switch avec du vide)
		{
			if (tab[i] > tab[i + 1]) // si le nombre ou je suis est + grand que le prochain
			{
				tmp = tab[i + 1]; // je met le prochain element dans tmp
				tab[i + 1] = tab[i]; // je deplace mon nombre a la place du suivant
				tab[i] = tmp; // je met ce que j'ai mis dans tmp a l'endroit ou je suis
				i = 0; // je remet i a zero
			}
			else
				i++; // si non j'avance
		}
	}
	i = 0; // je reviens au debut
	while (i < argc - 1)
	{
		printf("%d ", tab[i]); // j'affiche chaques elements de mon tableau
		i++; // j'avance
	}
	return (0);
}
