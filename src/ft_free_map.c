/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:21:26 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 14:50:18 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "skyscraper.h"

void	ft_free_constraints(t_map *map)
{
	if (map == 0)
		return ;
	if (map->up != 0)
	{
		free(map->up);
		map->up = 0;
	}
	if (map->down != 0)
	{
		free(map->down);
		map->down = 0;
	}
	if (map->left != 0)
	{
		free(map->left);
		map->left = 0;
	}
	if (map->right != 0)
	{
		free(map->right);
		map->right = 0;
	}
}

void	ft_free_eigenstates(t_map *map)
{
	unsigned int	row;

	if (map == 0 || map->eigenstates == 0)
		return ;
	row = 0;
	while (row < map->n)
	{
		if (map->eigenstates[row] != 0)
			free(map->eigenstates[row]);
		map->eigenstates[row] = 0;
		++row;
	}
	free(map->eigenstates);
	map->eigenstates = 0;
}

void	ft_free_map(t_map *map)
{
	if (map == 0)
		return ;
	ft_free_constraints(map);
	ft_free_eigenstates(map);
}
