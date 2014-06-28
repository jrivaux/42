/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 19:16:55 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/16 20:08:30 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	len;
	int	i;

	len = ft_strlen(s2);
	i = 0;
	if (*s2 == 0)
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		if (ft_memcmp(s1 + i, s2, len) == 0)
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
