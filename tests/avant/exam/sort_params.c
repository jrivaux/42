/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 15:51:39 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/22 17:02:20 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sort_params(char *str)
{

}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
		sort_params(av);
	return (0);
	}
}
