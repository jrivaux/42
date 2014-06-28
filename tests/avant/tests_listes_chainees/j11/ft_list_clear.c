/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 17:07:14 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/09 17:12:15 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_clear(t_list **begin_list);
{
	t_list	*tmp;
	t_list	*tmp2;
	
	tmp = *begin_list;
	while(tmp)
	{
		tmp2 = tmp;
		tmp = tmp->next;
		free(tmp2);
	}
	*begin_list = NULL;
}
