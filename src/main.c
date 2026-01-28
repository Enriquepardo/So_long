/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 10:46:32 by enpardo-          #+#    #+#             */
/*   Updated: 2026/01/28 13:39:11 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int main(int argc, char **argv)
{
	(void)argv;
    t_data  data;

    if (argc != 2)
        error_exit("Uso: ./so_long maps/mapa.ber");
        
    // 1. Validar extensión .ber (Día 2)
    // 2. Leer mapa y validar contenido (Día 2-3)
    
    // 3. Inicializar gráficos
    init_window(&data);
    
    // 4. Configurar hooks
    mlx_hook(data.win_ptr, 17, 0, close_game, &data);
    mlx_key_hook(data.win_ptr, handle_input, &data);
    
    // 5. Bucle principal
    mlx_loop(data.mlx_ptr);
    return (0);
}
