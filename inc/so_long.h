/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 10:46:30 by enpardo-          #+#    #+#             */
/*   Updated: 2026/01/28 13:47:16 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/* ================== INCLUDES ================== */

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
#include <mlx.h>

# include "../minilibx-linux/mlx.h"
# include "../libft/libft.h"

/* ================== DEFINES ================== */

# define TRUE 1
# define FALSE 0

/* ================== STRUCTS ================== */

typedef struct s_data
{
    void    *mlx_ptr;
    void    *win_ptr;
    char    **map;
    int     map_width;
    int     map_height;
    int     moves_count;
}	t_data;

typedef struct s_map
{
	char	**grid;
	int		width;
	int		height;
	int		player_x;
	int		player_y;
	int		collectibles;
}	t_map;

/* ================== MAP READ ================== */

void    init_window(t_data *data);
int     close_game(t_data *data);
int     handle_input(int keysym, t_data *data);

/* ================== MAP VALIDATION ================== */



/* ================== FLOOD FILL ================== */



/* ================== MAP UTILS ================== */

char		**read_map(char *file);
static int	count_lines(char *file);

/* ================== ERROR / FREE ================== */

void error_exit();

#endif
