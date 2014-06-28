/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_triselect.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/04 13:09:19 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/07 16:29:37 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	tab[argc - 1];
	int	min;
	int	tmp;

	tmp = 0;
	i = 1;
	j = 0;
	while (argv[i] != '\0')
	{
		tab[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	min = tab[0];// je met ma plus petite valeur au debut
	i = 0;
	if (argc > 1)
	{
		while (j < argc - 1) 
		{
			while (i < argc - 1)
			{	
				if (tab[i] < min )// si je suis sur ma plus petite valeur
				{
					min  = tab[i];// je stock ma valeur dans min
					tmp = i;// je stock la position de i dans tmp
				}
				i++;
			}	
			if (i == argc - 1)// si j'ai parcouru toute ma chaine
			{
				tab[tmp] = tab[j];// je libere ma case j, que je met dans tmp
				tab[j] = min;// je met ma valeur minimale dans j
				j++; // j'avance d'une case dans mes elements tries
				i = j;// le nouveau j prend la place de i (la position)
				min = tab[i];// je prend l'ancien minimum que je met dans i 
				tmp = i;// je stock la position de i dans tmp
			}
		}
	}
	j = 0;
	while (j < argc - 1)
	{
		printf("%d ", tab[j]);
		j++;
	}
	return (0);
}
