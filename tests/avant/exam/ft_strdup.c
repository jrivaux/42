/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/01 15:03:54 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/01 16:59:52 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	if (!(dst = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	main(int ac, char **av)
{
	(void) ac;
	printf("%s", ft_strdup(av[1]));
	printf("%s", strdup(av[2]));
	return (0);
}


/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	(void)ac;
char    *str;
	char    *str2;
	int     i;

	i = 0;
	str = av[1];
	str2 = ft_strdup(str);
	while (str2[i] != 0)
	{
		ft_putchar(str2[i]);
		i++;
	}
	return (0);
}*/
