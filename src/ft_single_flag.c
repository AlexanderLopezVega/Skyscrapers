/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_single_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:21:54 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 15:23:04 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_single_flag(unsigned int eigenstate)
{
	return ((eigenstate & (eigenstate - 1)) == 0);
}
