/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_djamal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/15 15:37:18 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/15 16:53:05 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_djamal(int i, int j, int k)
{
	if ((i > j && i < k) || (i < j && i > k))
		return (i);
	if ((j > i && j < k) || (j < i && j > k))
		return (j);
	if ((k > j && k < i) || (k < j && k > i))
		return (k);
	return (0);
}

int	main()
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 3;
	k = 2;
	printf("%d", ft_djamal(i, j, k));
	return (0);
}
