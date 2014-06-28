/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 14:54:37 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/05 15:16:18 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_list_last(t_list *begin_list)
{
	t_list	*tmp; // pour stocker

	tmp = begin_list; // je sauvegarde le debut de ma liste
	while (tmp->next != NULL) // temps que je ne suis pas a la fin de ;a liste
		tmp = tmp->next; // j'avance
	return (tmp); // je retourne le dernier element
}
