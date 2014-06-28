/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 19:01:09 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/20 19:33:43 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;
	int		size;

	i = 0;
	size = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
