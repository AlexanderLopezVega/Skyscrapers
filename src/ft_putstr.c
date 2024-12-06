/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:15:41 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 13:18:45 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "skyscraper.h"

void	ft_putstr(int fd, char *str)
{
	unsigned int	len;

	len = ft_strlen(str);
	write(fd, str, len);
}
