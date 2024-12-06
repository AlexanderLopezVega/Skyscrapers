/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:17:54 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 15:15:13 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

void	ft_print_map(t_map *map)
{
	unsigned int	row;
	unsigned int	col;

	if (map == 0)
		return ;

	row = 0;
	while (row < map->n)
	{
		col = 0;
		while (col < map->n)
		{
			ft_putuint(FD_OUTPUT, ft_flags_to_num(map->eigenstates[row][col]));
			ft_putchar(FD_OUTPUT, '\t');
			++col;
		}
		ft_putchar(FD_OUTPUT, '\n');
		++row;
	}
}
