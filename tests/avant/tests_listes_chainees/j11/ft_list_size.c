/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 14:06:15 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/05 14:47:25 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int		count;// pour compter le nombre d'elements dans ma liste
	t_list	*tmp; // ma variable temporaire

	tmp = begin_list; // je sauvegarde le debut de ma liste dans tmp
	count = 0; // j'initialise le compteur a 0
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count) // je retourne le nombre d'elements que j'ai compte
}
