/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 17:03:49 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/07 17:14:00 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_test_list(void *a)
{
	t_list	*tmp;
	t_list	*list;

	tmp = t_list;
	while (tmp->next != NULL && tmp->next != a)
		tmp = tmp->next;
	if (tmp == a)
		return (a);
	else
		return (NULL);
}
