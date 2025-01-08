/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:14:17 by alexander         #+#    #+#             */
/*   Updated: 2024/12/10 13:42:31 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

unsigned int	ft_count_states(unsigned int *eigentstate, unsigned int n)
{
	unsigned int	num_states;
	unsigned int	i;

	num_states = 0;
	i = 0;
	while (i < n)
	{
		if (eigentstate[i] != 0)
			++num_states;
		++i;
	}
	return (num_states);
}

unsigned int	ft_get_level(t_map *map)
{
	unsigned int	row;
	unsigned int	col;
	unsigned int	num_states;
	unsigned int	level;

	row = 0;
	level = 1;
	while (row < map->n)
	{
		col = 0;
		while (col < map->n)
		{
			num_states = ft_count_states(map->eigenstates[row][col], map->n);
			if (num_states == 0)
				return (0);
			if (num_states > level)
				level = num_states;
			++col;
		}
		++row;
	}
	return (level);
}

int	ft_collapse_eigenstates(t_map *map, unsigned int level)
{
	unsigned int	row;
	unsigned int	col;

	row = 0;
	while (row < map->n)
	{
		col = 0;
		while (col < map->n)
		{

			++col;
		}
		++row;
	}
}

void	ft_apply_constraints(t_map *map)
{
	unsigned int	row;
	unsigned int	col;

	row = 0;
	while (row < map->n)
	{
		col = 0;
		while (col < map->n)
		{

			++col;
		}
		++row;
	}
}

int	ft_solve_map(t_map *map)
{
	unsigned int	level;
	int				finished;

	finished = 0;
	while (!finished)
	{
		level = ft_get_level(map);
		if (level == 0 || level > map->n)
			return (0);
		finished = !ft_collapse_eigenstates(map, level);
	}
	return (1);
}
