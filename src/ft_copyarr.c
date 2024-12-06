/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copyarr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:07:04 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 14:11:30 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_copyarr(unsigned int *a, unsigned int *b, unsigned int offset
	, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		a[i] = b[offset + i];
		++i;
	}
}
