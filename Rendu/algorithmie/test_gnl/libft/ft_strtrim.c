/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 17:16:19 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/20 21:02:46 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!(str = (char *)malloc(sizeof(ft_strlen(s) + 1))))
		return (NULL);
	while (s[i] && ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t')))
		i++;
	while (s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	i--;
	while (j > 0 && ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t')))
	{
		i--;
		j--;
	}
	str[j] = '\0';
	return (str);
}
