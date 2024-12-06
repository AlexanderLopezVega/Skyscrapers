/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:51:03 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 15:15:53 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"
#include "s_map.h"

int	main(int argc, char **argv)
{
	t_map	map;

	if (!ft_parse_map(argc, argv, &map)
		|| !ft_solve_map(&map))
		ft_putstr(FD_ERROR, "map error\n");
	else
		ft_print_map(&map);
	ft_free_map(&map);
	return (0);
}
