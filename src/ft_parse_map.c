/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:27:01 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 15:03:28 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "skyscraper.h"

int	ft_init_map(t_map *map)
{
	if (map == 0)
		return (0);
	map->n = 0;
	map->eigenstates = 0;
	map->up = 0;
	map->down = 0;
	map->left = 0;
	map->right = 0;
	return (1);
}

int	ft_init_eigenstates(t_map *map, unsigned int num_constraints)
{
	unsigned int	row;
	unsigned int	col;

	if (map == 0 || num_constraints == 0 || num_constraints % 4 != 0)
		return (0);
	map->n = num_constraints / 4;
	map->eigenstates = malloc(sizeof(unsigned int *) * map->n);
	if (map->eigenstates == 0)
		return (0);
	row = 0;
	while (row < map->n)
	{
		map->eigenstates[row] = malloc(sizeof(unsigned int *) * map->n);
		if (map->eigenstates[row] == 0)
			return (0);
		col = 0;
		while (col < map->n)
		{
			map->eigenstates[row][col] = -1;
			++col;
		}
		++row;
	}
	return (1);
}

int	ft_distribute_constraints(t_map *map, unsigned int *constraints
	, unsigned int num_constraints)
{
	unsigned int	constraints_len;

	if (map == 0  || constraints == 0 || num_constraints == 0
		|| num_constraints % 4 != 0)
		return (0);
	constraints_len = num_constraints / 4;
	map->up = malloc(sizeof(unsigned int) * constraints_len);
	map->down = malloc(sizeof(unsigned int) * constraints_len);
	map->left = malloc(sizeof(unsigned int) * constraints_len);
	map->right = malloc(sizeof(unsigned int) * constraints_len);
	if (map->up == 0 || map->down == 0 || map->left == 0 || map->right == 0)
		return (0);
	ft_copyarr(map->up, constraints, constraints_len * 0, constraints_len);
	ft_copyarr(map->down, constraints, constraints_len * 1, constraints_len);
	ft_copyarr(map->left, constraints, constraints_len * 2, constraints_len);
	ft_copyarr(map->right, constraints, constraints_len * 3, constraints_len);
	return (1);
}

int	ft_parse_map(int argc, char **argv, t_map *map)
{
	unsigned int	*num_arr;
	unsigned int	n;

	if (!ft_init_map(map))
		return (0);
	if (argc != 2 || argv == 0)
		return (0);
	if (!ft_split_nums(argv[1], &num_arr, &n))
		return (0);
	if (!ft_init_eigenstates(map, n)
		|| !ft_distribute_constraints(map, num_arr, n))
	{
		free(num_arr);
		num_arr = 0;
		return (0);
	}
	return (1);
}
