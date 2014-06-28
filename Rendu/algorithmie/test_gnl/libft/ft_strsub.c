/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/19 19:55:08 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/25 16:42:35 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tab;

	if (!(tab = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strncpy(tab, (s + start), len);
	tab[len] = 0;
	return (tab);
}
