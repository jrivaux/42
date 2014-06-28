/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/19 18:57:44 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/20 15:24:39 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa2(int n, int i, int sign)
{
	int		j;
	char	*result;

	j = i - 1;
	if (!(result = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	result[i] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		sign = -1;
	}
	while (n)
	{
		result[j] = sign * (n % 10) + 48;
		n = n / 10;
		j--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		i;
	int		nb;
	char	*result;
	int		sign;

	if (n == 0)
	{
		result = (char *)malloc(sizeof(char) * 2);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	i = 0;
	sign = 1;
	nb = n;
	if (nb < 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (ft_itoa2(n, i, sign));
}
