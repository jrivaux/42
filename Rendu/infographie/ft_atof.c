/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/31 16:45:22 by jrivaux           #+#    #+#             */
/*   Updated: 2014/06/02 15:41:25 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(char *s)
{
	double	a;
	int		e;
	int		c;
	int		sign;
	int		i;

	a = 0.0;
	e = 0;
	while ((c = *s++) != '\0' && ft_isdigit(c))
		a = a * 10.0 + (c - '0');
	if (c == '.')
	{
		while ((c = *s++) != '\0' && ft_isdigit(c))
		{
			a = a * 10.0 + (c - '0');
			e = e - 1;
		}
	}
	if (c == 'e' || c == 'E')
	{
		sign = 1;
		i = 0;
		c = *s++;
		if (c == '+')
			c = *s++;
		else if (c == '-')
		{
			c = *s++;
			sign = -1;
		}
		while (ft_isdigit(c))
		{
			i = i * 10 + (c - '0');
			c = *s++;
		}
		e += i * sign;
	}
	while (e > 0)
	{
		a *= 10.0;
		e--;
	}
	while (e < 0)
	{
		a *= 0.1;
		e++;
	}
	return (a);
}
