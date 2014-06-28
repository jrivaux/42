/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivaux <jrivaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 00:01:12 by jrivaux           #+#    #+#             */
/*   Updated: 2014/01/18 17:40:37 by jrivaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_env
{
	void	*mlx;
	void	*win;
}					t_env;

void	draw_diago(void *mlx, void *win)
{
	int x;
	int y;

	y = 500;
	while (y > 0 )
	{
		x = 0;
		while (x <= 500)
		{
			mlx_pixel_put(mlx, win, x, y, 0xFF00FF);
			y++;
			x++;
		}
		y = y - 20;
	}
}

void	draw_horizon(void *mlx, void *win)
{
	int x;
	int y;

	y = 0;
	while (y <= 500)
	{
		x = 0;
		while (x < 500)
		{
			mlx_pixel_put(mlx, win, x, y,0x0FFFF0);
			x++; 
		}
		y = y + 50;
	}
}

int		main()
{
	t_env e;

	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, 500, 500,"42");
	draw_diago(e.mlx, e.win);
	draw_horizon(e.mlx, e.win);
	sleep(5);
	return (0);
}
