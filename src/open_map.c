/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:37:51 by enpardo-          #+#    #+#             */
/*   Updated: 2026/01/28 13:16:18 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	init_window(t_data *data)
{
	data->mlx_ptr = mlx_init();
	if (!data->mlx_ptr)
		error_exit("Fallo al conectar con la MLX.");
	data->win_ptr = mlx_new_window(data->mlx_ptr, 1000, 800, "so_long");
	if (!data->mlx_ptr)
	{
		free(data->mlx_ptr);
		error_exit("Fallo al abrir la ventana.");
	}
}

int	close_game(t_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	exit(0);
	return (0);
}

int	handle_input(int keysym, t_data *data)
{
	if (keysym == 65307)
		close_game(data);
	return (0);
}
