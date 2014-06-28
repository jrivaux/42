/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/19 13:03:28 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/19 14:30:16 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		tmp;
	t_list	*begin;

	begin = lst;
	while (lst && lst->next)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = begin;
		}
		else
		{
			lst = lst->next;
		}
	}
	return (begin);
}

int cmp(int a, int b)
{
	if (a <= b)
		return (1);
	return (0);
	//return (a <= b);
}

t_list	*creat_node(int	a)
{
	t_list	*begin;

	begin = (t_list *)malloc(sizeof(t_list));
	begin->data = a;
	begin->next = NULL;
	return (begin);
}

int	main(void)
{
	t_list	*begin;
	t_list	*sorted;
	t_list	*current;

	begin = creat_node(5);
	begin->next = creat_node(0);
	begin->next->next = creat_node(5);
	begin->next->next->next = creat_node(-4);
	begin->next->next->next->next = creat_node(7);
	current = begin;
	while (current)
	{
		printf("%d->", current->data);
		current = current->next;
	}
	printf("NULL\n");
	sorted = sort_list(begin, cmp);
	while (sorted)
	{
		printf("%d->", sorted->data);
		sorted = sorted->next;
	}
	printf("NULL\n");
	sort_list(NULL, cmp);
	return (0);
}
