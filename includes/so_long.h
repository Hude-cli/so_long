/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.s42.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:14:24 by hugde-cl          #+#    #+#             */
/*   Updated: 2023/05/19 16:45:06 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define KEY_W 13
# define KEY_Q 12
# define KEY_D 2
# define KEY_Z 6
#define KEY_UP 126
#define KEY_DOWN 125
#define KEY_LEFT 123
#define KEY_RIGHT 124

# include "mlx.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct t_data {

void *mlx_ptr;
void *win_ptr;

}				t_data;

void	initialize(t_data *my_struct);
int		deal_key(int key, void *param);
int		key_release(int keycode, void *param);
int		mouse_release(int button, int x, int y, void *param);
int		mouse_scroll(int button, int x, int y, void *param);
void	ft_putchar(char c);
void	put_img(t_data *my_struct, int i, int j);

#endif
