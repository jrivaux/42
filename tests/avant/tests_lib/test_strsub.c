/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 13:47:43 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/10 15:31:10 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>
#include <stdio.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	int 	i;

	i = 0;
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (tab == NULL)
		return (NULL);
	while (s[start] != '\0' && len > 0)
	{
		tab[i] = s[start];
		len--;
		i++;
		start++;
	}
	tab[i] = '\0';
	return (tab);
}

int 	main()
{
	size_t	len;
	char	*s;
	int		start;

	s = "Je suis un chat";
	len = 5;
	start = 3; 

	printf("%s", ft_strsub(s, start, len));
	return (0);
}
