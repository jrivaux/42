/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_exam.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 16:24:10 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/10 18:11:24 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_test_exam(char *str)
{
	int 	i;
	char	c;
	int		j;

	j = 0;
	i = 0;
	 while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			ft_putchar(str[i]);
			i++;
		}
		if (j % 2 == 0)
		{	
			c = str[i] - 32;
		}
		else
			c = str[i];
		i++;
		j++;
		ft_putchar(c);
	}
}

int	main()
{
	char *str;
	
	str = "coucou ca va";
	ft_test_exam(str);
	return (0);
}
