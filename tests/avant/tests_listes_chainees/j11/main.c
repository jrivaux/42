/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 17:13:06 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/10 11:14:49 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdio.h>
void	ft_print_list(t_list *list);


int	main(void)
{
	t_list *list;

	list = NULL;
	ft_list_push_back(&list, "coucou");
	ft_list_push_back(&list, "salut");
	ft_print_list(list);
	return (0);
}

void	ft_print_list(t_list *list)
{
	t_list *tmp;

	tmp = list;
	while (tmp)
	{
		printf("%s\n", tmp->data);
		tmp = tmp->next;
	}
}
