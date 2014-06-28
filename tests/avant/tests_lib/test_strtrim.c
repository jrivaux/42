/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 14:54:29 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/10 16:16:16 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <libft.h>

char *ft_strtrim(char const *s)
{
	char	*tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = (char *)malloc(ft_strlen(s) * sizeof(char));
	while (s[i] == ' ' || s[i] == '\n' || s[i] == 't')
		i++;
	while (s[i])
	{
		tab[j] = s[i];
		j++;
		i++;
	}
	while (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == 't')
	{
		tab[j] = 0;
		i--;
		j--;
	}
	return (tab);
}

int	main()
{
	char *s;

	s = "  coucou  salut  ";
	printf("%s", ft_strtrim(s));
	return (0);
}
