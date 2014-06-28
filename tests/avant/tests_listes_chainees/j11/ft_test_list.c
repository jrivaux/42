/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 17:03:49 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/07 17:42:51 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_test_list(void *a)
{
	t_list	*tmp;
	t_list	*list;

	tmp = list;// je demarre au debut de ma liste
	while (tmp != NULL && tmp->data != a) // temps que je ne suis pas a la fin de ;a liste et qu'a l'interieur de mon maillon je ne trouve pas a
		tmp = tmp->next; // j'avance
	if (tmp->data)// 
		return (tmp); 
	else
		return (NULL);
