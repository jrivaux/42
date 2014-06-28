/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 19:06:42 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/20 19:34:04 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	int		i;
	char	*str;

	i = 0;
	size = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
