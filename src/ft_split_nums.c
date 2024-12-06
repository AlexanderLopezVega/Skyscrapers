/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:29:39 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 15:13:52 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "skyscraper.h"

int ft_split_nums(char *str, unsigned int	**num_arr, unsigned int *n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	int				in_num;

	if (str == 0 || str[0] == '\0' || num_arr == 0 || n == 0)
		return (0);
	len = ft_count_nums(str);
	if (len == 0)
		return (0);
	*num_arr = malloc(sizeof(unsigned int) * len);
	if (*num_arr == 0)
		return (0);
	i = 0;
	j = 0;
	*n = 0;
	in_num = 0;
	while (str[j] != '\0')
	{
		if (!in_num && ft_isdigit(str[j]))
		{
			in_num = 1;
			i = j - 1;
		}
		if (in_num && !ft_isdigit(str[j]))
		{
			(*num_arr)[(*n)++] = ft_subatoui(str, i, j);
			in_num = 0;
		}
		++j;
	}
	if (in_num)
		(*num_arr)[(*n)++] = ft_subatoui(str, i, j);
	return (1);
}
