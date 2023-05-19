/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.s42.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:21:12 by hugde-cl          #+#    #+#             */
/*   Updated: 2023/05/19 16:44:19 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	initialize(t_data *my_struct)
{
	my_struct->check_e = 0;
	my_struct->check_p = 0;
	my_struct->coin = 0;
	my_struct->coin2 = 0;
	my_struct->move = 0;
}

int main()
{
	void *mlx_ptr;
	void *win_ptr;
	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		exit(1);
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "hugo à s19!");
	if (!win_ptr)
	{
		mlx_destroy_window(mlx_ptr, win_ptr);
		exit(1);
	}
	mlx_pixel_put(mlx_ptr, win_ptr, 250, 250, 0xFFFFFFFF);
	mlx_key_hook(win_ptr, deal_key, NULL);
	mlx_mouse_hook(win_ptr, mouse_release, NULL);
	mlx_hook(win_ptr, 2, 1L << 0, key_release, NULL);
	mlx_loop(mlx_ptr);
	mlx_destroy_window(mlx_ptr, win_ptr); // Ajout de la destruction de la fenêtre avant la fin du programme
	return 0;
}
