/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 15:16:57 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/06 12:20:44 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_list_push_params(int ac, char **av)
{
	int		i; // je cree un compteur
	t_list	*elem; // mon nouvel element
	t_list	*tmp; //pour stocker

	elem = ft_create_elem(av[1]); // mon nouvel element est mon argument place en parametre
	i = 2; // j'initialise i a 2 car je commence au deuxieme argument
	while (i <= ac) // temps que j'ai des arguments
	{
		elem = ft_create_elem(av[i]); // je cree un nouvel element qui contiendra mon argument
		tmp = ft_create_elem(av[i]); // je cree ma variable temporaire qui contiendra mon argument
		if (elem == NULL) // si mon nouvel element est vide
			elem = tmp; // je met tmp dedans
		else
		{
			tmp->next = elem; // si non je met mon nouvel element a la prochaine case
			elem = tmp; // je met tmp dans mon nouvel element
		}
		i++; // j'avance
	}
	return (elem); // je retourne l'adresse du premier element
}
