/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/30 17:13:43 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/04 17:30:53 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft/libft.h"

int	 main()
{
	char **tab;

	tab = (char **)malloc(sizeof(char *) * 3);
	tab[0] = (char *)malloc(sizeof(char) * 3);
	tab[1] = (char *)malloc(sizeof(char) * 5);
	tab[2] = (char *)malloc(sizeof(char) * 6);

	tab[0] = "Je\0";
	tab[1] = "suis\0";
	tab[2] = "julie\0";
	ft_putstr(tab[0]);
	ft_putstr("\n");
	ft_putstr(tab[1]);
	ft_putstr("\n");
	ft_putstr(tab[2]);
	return (0);

}
