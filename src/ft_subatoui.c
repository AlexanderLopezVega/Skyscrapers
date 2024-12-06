/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subatoui.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:45:02 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 14:53:37 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

unsigned int	ft_subatoui(char *str, unsigned int i, unsigned int j)
{
	unsigned int	index;
	unsigned int	exponent;

	if (str == 0 || i >= j)
		return (0);
	index = i;
	while (index < j && ft_isspace(str[index]))
		++index;
	exponent = 0;
	while (index < j && str[index] != '\0' && ft_isdigit(str[index]))
	{
		exponent = (exponent * 10) + (str[index] - '0');
		++index;
	}
	return (exponent);
}
