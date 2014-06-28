                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 10:14:41 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/19 18:36:15 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_memstr(char const *s, char c, size_t i, char **tab)
{
	size_t	count;
	size_t	start;

	j = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			start = i + 1;
		else if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			tab[j] = (char *)malloc((i - start + 2)	* sizeof(*tab));
			j++;
		}
		i++;
	}
}

static	char	**ft_memtab(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	**tab;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] == c)
			count++;
		i++;
	}
	tab = (char **)malloc((count + 2) * sizeof(char *));
	if (!tab)
		return (NULL);
	ft_memstr(s, c, 0, tab);
	return (tab);
}

static void	ft_fill_str(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	y;
	size_t	x;

	count = 0;
	i = 0;
	y = 0;
	while (s[x] != '\0')
	{
		if (s[x] != c && (s[x + 1] == c || s[x + 1] == '\0'))
		{
			tab[y][i] = s[x];
			y++;
			i = 0;
		}
		else if (s[x] != c)
		{
			tab[y][i] = s[x];
			i++;
		}
		x++;
	}
	tab[y] = NULL;
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	write(1, "test\n", 5);
	tab = ft_memtab(s, c);
	write(1, "test\n", 5);
	ft_fill_str(s, c, tab);
	if (!tab)
		return (NULL);
	return (tab);
}
