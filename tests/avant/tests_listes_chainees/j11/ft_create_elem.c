/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 11:38:12 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/27 17:28:11 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_create_elem(void *str)
{
	t_list *tmp; // mon nouvel element

	tmp = (t_list *)malloc(sizeof(t_list)); // je malloc la place pour mon nouvel element
	if (tmp)
	{
		tmp->data = str; // je lui donne le no; de la case
		tmp->next = NULL; // je le fais pointer vers NULL
	}
	return (tmp); // je retourne le nouvel element
}
/*
int main(int ac, char **av)
{
	t_list	*elem;

	if (ac >= 1)
	{
		elem = ft_create_elem(av[1]);
		printf("%s %p\n", elem->data, elem->next);
	}
	return (0);
}
*/
