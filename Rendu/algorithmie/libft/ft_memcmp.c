/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 13:44:38 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/20 20:20:01 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	i = 0;
	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (dst[i] == src[i] && i < n - 1)
	{
		i++;
		if (dst[i] == '\0' || dst[i] != src[i])
		{
			return (dst[i] - src[i]);
		}
	}
	return (dst[i] - src[i]);
}
