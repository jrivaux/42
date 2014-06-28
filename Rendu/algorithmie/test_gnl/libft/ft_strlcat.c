/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 16:25:38 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/16 17:32:49 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;

	j = ft_strlen(dst);
	if (size < j)
		return (size + ft_strlen(src));
	ft_strncat(dst, src, size - j - 1);
	return (j + ft_strlen(src));
}
