/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 13:01:38 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/15 13:55:39 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ch;

	ch = (unsigned char *)b;
	while (len > 0)
	{
		*ch = (unsigned char)c;
		ch++;
		len--;
	}
	return (b);
}
