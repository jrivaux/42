/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 14:25:23 by jrivaux           #+#    #+#             */
/*   Updated: 2014/03/15 15:50:11 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	int	i;

	i = 0;
		while (((str[i] == ' ') || (str[i] == '\t')) && (str[i] != '\0'))
			i++;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
}
int	main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	write (1, "\n", 1);
	return (0);
}
