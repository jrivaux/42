/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 13:32:48 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/05 14:03:41 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem; // mon nouvel element

	elem = ft_create_elem(data); // je cree mon nouvel element
	if (*begin_list == NULL) // si il n'y a rien au debut de ma liste
		*begin_list = elem; // je met le nouvel element dedans
	else
	{
		elem->next = *begin_list; // je deplace l'ancien premier maillon au prochain
		*begin_list = elem; // je met le nouvel element au debut de ma liste
	}
}
