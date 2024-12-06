/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_map.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:11:14 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 14:33:16 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_MAP_H
# define S_MAP_H

typedef struct		s_map
{
	unsigned int	n;
	unsigned int	**eigenstates;
	unsigned int	*up;
	unsigned int	*down;
	unsigned int	*left;
	unsigned int	*right;
}					t_map;


#endif
