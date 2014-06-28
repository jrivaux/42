/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 17:12:57 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/16 18:49:09 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;
	size_t			i;

	i = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (i < n && src2[i] != (unsigned char)c)
	{
		dst2[i] = src2[i];
		i++;
	}
	if (src2[i] == c)
	{
		dst2[i] = src2[i];
		return (dst2 + i + 1);
	}
	return (NULL);
}
