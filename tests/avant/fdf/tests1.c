/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 20:22:18 by jrivaux           #+#    #+#             */
/*   Updated: 2013/12/16 23:32:53 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <unistd.h>

int		 main(int ac, char **av)
{
	void *mlx;
	void *win;
	int x;
	int y;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 420, 420, "42");
	y = 100;
	while (y < 200)
	{
		x = 100;
		while (x < 200)
		{
			mlx_pixel_put(mlx, win, x, y, 0xFF0000);
			usleep(5000);
			x++;
		}
		y++;
	}
	sleep(10);
	return (0);
}
