/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:17:19 by alexander         #+#    #+#             */
/*   Updated: 2024/12/06 15:23:41 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPER_H
# define SKYSCRAPER_H
# define FD_OUTPUT 1
# define FD_ERROR 2
# include "s_map.h"

void			ft_copyarr(unsigned int *a, unsigned int *b, unsigned int offset
					, unsigned int len);
unsigned int	ft_count_nums(char *str);
unsigned int	ft_flags_to_num(unsigned int flags);
void			ft_free_map(t_map *map);
int				ft_isdigit(char c);
int				ft_isspace(char c);
int				ft_parse_map(int argc, char **argv, t_map *map);
void			ft_print_map(t_map *map);
void			ft_putchar(int fd, char c);
void			ft_putstr(int fd, char *str);
void			ft_putuint(int fd, unsigned int i);
int				ft_single_flag(unsigned int eigenstate);
int				ft_solve_map(t_map *map);
int				ft_split_nums(char *str, unsigned int	**num_arr
					, unsigned int *n);
unsigned int	ft_strlen(char *str);
unsigned int	ft_subatoui(char *str, unsigned int i, unsigned int j);

#endif
