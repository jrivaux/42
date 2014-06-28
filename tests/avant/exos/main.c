/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/02 10:26:40 by jrivaux           #+#    #+#             */
/*   Updated: 2014/02/02 10:36:38 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	***line;

	line = malloc(8);
	*line = malloc(8);
	**line = strdup("coucou");
	printf("%x : %x, %x : %x, %x : %x", line, *line, *line, **line, **line, ***line);
}
