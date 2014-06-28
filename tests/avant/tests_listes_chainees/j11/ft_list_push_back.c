/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 12:35:19 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/09 17:55:43 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem; // mon nouvel element
	t_list	*tmp; // la ou je stockerai temporairement

	elem = ft_create_elem(data);// je cree un nouvel element
	if (*begin_list == NULL) // si la liste est vide
		*begin_list = elem; // je met le nouvel element a cet endroit
	else
	{
		tmp = *begin_list; // si non je met tmp au debut de ma liste
		while (tmp->next != NULL) // tant que le prochain maillon apres tmp n'est pas vide
			tmp = tmp->next; // je passe au prochain maillon
		tmp->next = elem; // quand j'arrive a la fin de ma chaine j'ajoute le nouvel element
	}
}
