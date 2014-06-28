/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/28 17:35:40 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/29 17:35:52 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	main(void)
{
	int	ret;

	ret = ft_printf("%shello\n%s", "coucou\n","salut");
	printf("valeur de retour : %d", ret);
	return (0);
}
