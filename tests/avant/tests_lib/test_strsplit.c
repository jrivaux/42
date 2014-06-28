/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/11 11:58:43 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/11 18:36:04 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_nbr_word(char const *s, char c)
{
	int	i;// pour avancer dans ma chaine 
	int	j;// pour memoriser le debut de chaques mots

	i = 0;
	j = 0;
	while (s[i] != '\0')// temps que je ne suis pas a la fin de ma chaine
	{
		if (s[i] != c)// si je ne trouve pas d'*
		{
			++j;// je place J au debut de mon mot
			while (s[i] != c)// tant que je ne suis pas sur une *
				++i;// je continue de parcourir ma chaine
		}
		++i;
	}
	return (j);

}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		start;
	int		word;

	i = 0;
	j = 0;
	start = 0;
	word = ft_nbr_word(s, c);
	tab = (char **)malloc(sizeof(char *) * (word + 1));// je cree mes tableaux
	if (tab == NULL)
		return (NULL);
	while (j < word) //
	{
		while (s[i] == c)
			++i;
		if (s[i] != c && s[i] != '\0')
			start = i;
		while (s[i] != c && s[i] != '\0')
			++i;
		tab[j] = ft_strsub(s, start, i - start - 1);
		++j;
	}
	return (tab);
}

int	main()
{
	char	c;
	char	*s;
	char	**str;

	c = '*';
	s = "**salut**les**gens**";
	str = ft_strsplit(s, c);
	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	return (0);
}

