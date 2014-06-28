/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/16 15:28:52 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/16 15:43:12 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			write(1, &str[i], 1);
		while (str[i + 1] == ' ' || str[i + 1] == '\t')
			i++;
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != '\0')
			write(1, " ", 1);
		i++;
	}
}

int		main(int ac, char** av)
{
	if (ac == 2)
		ft_epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
