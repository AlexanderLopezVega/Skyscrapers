/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:37:45 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 13:40:04 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

unsigned int	ft_count_nums(char *str)
{
	unsigned int	i;
	unsigned int	nums;
	int				in_num;

	if (str == 0)
		return (0);
	i = 0;
	nums = 0;
	in_num = 0;
	while (str[i] != '\0')
	{
		if (!in_num && ft_isdigit(str[i]))
			in_num = 1;
		else if (in_num && !ft_isdigit(str[i]))
		{
			in_num = 0;
			++nums;
		}
		++i;
	}
	if (in_num)
		++nums;
	return (nums);
}
