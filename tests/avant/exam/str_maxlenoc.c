/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_maxlenoc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/05 14:46:26 by jrivaux           #+#    #+#             */
/*   Updated: 2014/05/18 18:00:39 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (s1 && s2 && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	str_maxlenoc(char **av)
{
	int		i;
	int		j;
	int		k;
	int		l;
	int		n;
	char	*str;

	i = 0;
	j = 2;
	k = 0;
	n = 1;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(av[1]) + 1))))
		return ;
	*str = 0;
	while (av[1][i])
	{
		j = 2;
		k = 0;
		while (av[j] && (av[j][k] || k == 0))
		{
			if (av[j][0] == 0)
				j++;
	//		printf("i=%d, j=%d, k=%d, n=%d\n", i, j, k, n);
			if (ft_strncmp(av[1] + i, av[j] + k, n) == 0)
			{
				j++;
				k = 0;
			}
			else
				k++;
		}
		if (av[j] == NULL)
		{
			if (n > ft_strlen(str))
			{
				l = 0;
				while (l < n)
				{
					str[l] = av[1][i + l];
					l++;
				}
				str[l] = '\0';
			}
			n++;
		}
		else
		{
			n = 1;
			i++;
		}
	}
	write(1, str, ft_strlen(str));
}

int	main(int ac, char **av)
{
	if (ac > 2)
		str_maxlenoc(av);
	if (ac == 2)
		write(1, av[1], ft_strlen(av[1]));
	write(1, "\n", 1);
	return (0);
}
