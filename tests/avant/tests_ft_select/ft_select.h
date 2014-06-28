/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 14:59:22 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/12 15:30:13 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
#	define FT_SELECT_H

typedef struct	s_list
{
	struct s_list	*next;
	struct s_list	*prev;
	char			*str;

}		t_list;

struct s_glob
{

}

#endif
