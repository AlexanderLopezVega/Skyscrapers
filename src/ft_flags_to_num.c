/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_to_num.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:36:50 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 14:42:06 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_flag_up(unsigned int flags, unsigned int offset)
{
	return ((flags & (1 << offset)) != 0);
}

unsigned int	ft_flags_to_num(unsigned int flags)
{
	unsigned int	num_bits;
	unsigned int	i;

	num_bits = sizeof(unsigned int) * 8;
	i = 0;
	while (i < num_bits && ft_flag_up(flags, i))
		++i;
	if (ft_flag_up(flags, i) && flags == (i << i))
		return (i);
	return (0);
};
