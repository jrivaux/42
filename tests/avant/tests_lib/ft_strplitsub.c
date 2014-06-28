/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplitsub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 09:21:57 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/12 12:57:24 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putstr(char const *s)
{
	int	 i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
			i++;
		write(1, s, i);
		write(1, "\n", 1);
	}

}
int		ft_nbr_words(char const *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			++j;
			while (s[i] != c && s[i] != '\0')
				++i;
		}
		i++;
	}
	return (j);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char*)malloc(sizeof(char) * (len + 1));
	if (tab == NULL)
		return (NULL);
	while (s[start] != '\0' && len > 0)
	{
		tab[i] = s[start];
		len--;
		i++;
		start++;
	}
	tab[i] ='\0';
	return (tab);
}


char	**ft_strsplitsub(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	int		word;
	char	**tab;

	i = 0;
	j = 0;
	word = ft_nbr_words(s ,c);
	tab = (char **)malloc(sizeof(char *) * (word + 1));
	if (tab == NULL)
		return (NULL);
	while (j < word)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		tab[j] = ft_strsub(s, start, i - start );
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

int	main()
{
	char	c;
	char	*s;
	char	**str;

	c = '*';
	s = "**salut**les**gens";
	str = ft_strsplitsub(s, c);
	ft_putstr(str[0]);
	ft_putstr(str[1]);
	ft_putstr(str[2]);
	return (0);
}
