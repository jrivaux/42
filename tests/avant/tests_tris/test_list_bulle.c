/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_list_bulle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 14:59:23 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/07 16:52:36 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int		i;
	t_list	*list;
	t_list	*current;
	t_list	*tmp;
	char	*str[4] = {"97", "45", "59", NULL};

	i = 0;
	while (str[i])
	{
		ft_list_push_back(&list, str[i]);
		i++;
	}
	current = list; //je met current au debut de ma liste
	while (current)
	{
		printf("%s->", current->data);// 
		current = current->next;// j'avance
	}
	printf("NULL\n");
	tmp = list;// je sauvegarde la position du debut de ma liste dans tmp
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
}
