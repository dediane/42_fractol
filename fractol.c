/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddecourt <ddecourt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 22:06:18 by ddecourt          #+#    #+#             */
/*   Updated: 2021/06/01 01:04:19 by ddecourt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "libft/libft.h"

int	main(int ac, char **av)
{
	void *mlx_ptr;
	void *win_ptr;
	int x;
	int y;

	x = 800;
	y = 650;
	if (ac == 3)
	{
		x = ft_atoi(av[1]);
		y = ft_atoi(av[2]); 
	}

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, x, y, "fractol");
	mlx_loop(mlx_ptr);
}
