/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 18:08:47 by jrivaux           #+#    #+#             */
/*   Updated: 2014/04/20 20:19:26 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *str, void (*f) (char *))
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		f(str + i);
		i++;
	}
}
