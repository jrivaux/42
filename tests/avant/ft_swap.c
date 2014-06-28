/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/16 15:56:52 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/16 16:18:42 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = 0;
	if (a && b)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}

int	main()
{
	int	*a;
	int	*b;

	a = (int *)malloc(sizeof(int));
	b = (int *)malloc(sizeof(int));
	*a = 2;
	*b = 1;
	ft_swap(a, b);
	printf("%d, %d", *a, *b);
	return (0);
}
