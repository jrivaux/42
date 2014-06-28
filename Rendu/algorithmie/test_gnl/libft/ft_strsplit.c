/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/19 15:23:45 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/20 20:12:27 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_memstr(char const *s, char c, int i, char **tab)
{
	int	j;
	int	start;

	j = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			start = i + 1;
		else if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			tab[j] = (char *)malloc(sizeof(char) * (i - start + 2));
			j++;
		}
		i++;
	}
}

static char		**ft_memtab(char const *s, char c)
{
	int		i;
	int		count;
	char	**tab;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] == c)
			count++;
		i++;
	}
	if (!(tab = (char **)malloc(sizeof(char *) * (count + 2))))
		return (NULL);
	ft_memstr(s, c, 0, tab);
	return (tab);
}

static void		ft_fill_str(char const *s, char c, char **tab)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 0;
	y = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			tab[y][x] = s[i];
			y++;
			x = 0;
		}
		else if (s[i] != c)
		{
			tab[y][x] = s[i];
			x++;
		}
		i++;
	}
	tab[y] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = ft_memtab(s, c);
	ft_fill_str(s, c, tab);
	return (tab);
}
