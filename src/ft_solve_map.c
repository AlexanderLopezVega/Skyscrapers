/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:14:17 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 15:40:32 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_process_cell(t_map *map, unsigned int row, unsigned int col)
{
	if (map == 0 || row == 0 || col == 0)
		return (0);
	return (1);
}

int	ft_solve_map(t_map *map)
{
	return (ft_process_cell(map, 0, 0));
}
