/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 10:40:52 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/10 11:13:04 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list	*ft_list_at (t_list *begin_list, unsigned int nbr)
{
	t_list *tmp;
	int i;

	i = 0;
	tmp = begin_list;
	if (!tmp && ft_list_size(tmp) < nbr)
		return (NULL);
	while (tmp && i < nbr)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp)
}
