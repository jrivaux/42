/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/19 15:46:14 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/19 18:17:42 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		nbr_words(char *str)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	j = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && j == 0)
		{
			j = 1;
			word++;
		}
		else if (str[i] == ' ' || str[i] == '\t')
			j = 0;
		i++;
	}
	printf("%d\n", word);
	return (word);
}

int		nbr_letter(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\t')
		i++;
	printf("%d\n", i);
	return (i);
}

char	**epur_str(char *str)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = NULL;
	word = nbr_words(str);
	if (!(tab = (char **)malloc(sizeof(char *) * ((nbr_words(str)) + 1))))
		return (NULL);
	while (j < word)
	{
		tab[j] = (char *)malloc(sizeof(char) * (nbr_letter(str) + 1));
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			tab[i] = str[i];
			i++;
		}
		j++;
	}
	return (tab);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		nbr_words(av[1]);
		nbr_letter(av[1]);
	}
	return (0);
}
