/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yed-dyb <yed-dyb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:25:43 by yed-dyb           #+#    #+#             */
/*   Updated: 2022/06/21 12:36:46 by yed-dyb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "miniRT.h"


// typedef struct	s_data {
// 	void	*img;
// 	char	*addr;
// 	int		bits_per_pixel;
// 	int		line_length;
// 	int		endian;
// }				t_data;

int distance(int x1, int y1, int x2, int y2)
{
	return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

int	main()
{
	void	*mlx;
	void	*win;
	int c_x, c_y;

	mlx = mlx_init();
	win = mlx_new_window(mlx, WIDTH, HEIGHT, "Hello world!");

	c_x = WIDTH / 2;
	c_y = HEIGHT / 2;
	int i = 0;
	while(i < WIDTH)
	{
		int j = -1;
		while(++j < HEIGHT)
		{
			if (distance(i, j, c_x, c_y) < 100)
				mlx_pixel_put(mlx, win, i, j, 0x00157F1F);
		}
		i++;
	}

	mlx_loop(mlx);
}
