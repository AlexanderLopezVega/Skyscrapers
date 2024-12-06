/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:23:42 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 14:51:15 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

void	ft_putuint(int fd, unsigned int nb)
{
	if (nb < 10)
		ft_putchar(fd, nb + '0');
	else
	{
		ft_putuint(fd, nb / 10);
		ft_putuint(fd, nb % 10);
	}
}
