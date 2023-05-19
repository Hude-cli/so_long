/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.s42.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:20:21 by hugde-cl          #+#    #+#             */
/*   Updated: 2023/05/19 16:31:24 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int deal_key(int key, void *param)
{
	if (key == KEY_Z || key == KEY_DOWN)
		printf("KeyDown\n");
	else if (key == KEY_W || key == KEY_UP)
		printf("KeyUp\n");
	else if (key == KEY_Q || key == KEY_LEFT)
		printf("KeyLeft\n");
	else if (key == KEY_D || key == KEY_RIGHT)
		printf("KeyRight\n");

	// Autres traitements si nécessaire

	return 0;
}

int key_release(int keycode, void *param)
{
	return 0;
}

int mouse_release(int button, int x, int y, void *param)
{
	if (button == 1)
	{
		printf("Left click\n");
	}
	else if (button == 2)
	{
		printf("Right click\n");
	}
	else if (button == 3)
	{
		printf("Middle click\n");
	}
	else if (button == 4)
	{
		printf("Scroll up\n");
	}
	else if (button == 5)
	{
		printf("Scroll down\n");
	}
	return 0;
}
