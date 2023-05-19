/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.s42.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:43:07 by hugde-cl          #+#    #+#             */
/*   Updated: 2023/05/19 16:43:11 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	put_img(t_data *my_struct, int i, int j)
{
	if (my_struct->matrix[i][j] == '0')
		mlx_put_image_to_window(my_struct->mlx,
			my_struct->win, my_struct->img[0], j * 32, i * 32);
	if (my_struct->matrix[i][j] == '1')
		mlx_put_image_to_window(my_struct->mlx,
			my_struct->win, my_struct->img[1], j * 32, i * 32);
	if (my_struct->matrix[i][j] == 'C')
		mlx_put_image_to_window(my_struct->mlx,
			my_struct->win, my_struct->img[5], j * 32, i * 32);
	if (my_struct->matrix[i][j] == 'P')
		mlx_put_image_to_window(my_struct->mlx,
			my_struct->win, my_struct->img[2], j * 32, i * 32);
	if (my_struct->matrix[i][j] == 'X')
		mlx_put_image_to_window(my_struct->mlx,
			my_struct->win, my_struct->img[6], j * 32, i * 32);
	if (my_struct->coin == 0 && my_struct->matrix[i][j] == 'E')
		mlx_put_image_to_window(my_struct->mlx,
			my_struct->win, my_struct->img[3], j * 32, i * 32);
	else if (my_struct->matrix[i][j] == 'E')
		mlx_put_image_to_window(my_struct->mlx,
			my_struct->win, my_struct->img[4], j * 32, i * 32);
}
