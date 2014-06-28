/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/19 13:16:16 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/19 13:43:53 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s2);
	i = 0;
	if (*s2 == 0)
		return ((char *)s1);
	while (s1[i] != '\0' && i < n - (len - 1))
	{
		if (ft_memcmp(s1 + i, s2, len) == 0)
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
