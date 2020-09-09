/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 13:41:21 by yshimada          #+#    #+#             */
/*   Updated: 2020/09/09 13:39:14 by yshimada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_map_error(void)
{
	write(1, "map error!\n", 11);
}

void	init(char (*map)[4])
{
	int i;

	i = 0;
	while (i < 16)
	{
		map[i / 4][i % 4] = '0';
		i++;
	}
}

void	show(char (*map)[4])
{
	int i;

	i = 0;
	while (i < 16)
	{
		ft_putchar(map[i / 4][i % 4]);
		i++;
		if (i % 4 == 0)
			ft_putchar('\n');
		else
			ft_putchar(' ');
	}
}

void	solve(int *views)
{
	char	(*map)[4];
	int		*solve_flag;
	int		num;

	num = 0;
	solve_flag = &num;
	map = malloc(sizeof(char) * 4 * 4);
	init(map);
	create_map(map, views, -1, solve_flag);
	if (*solve_flag == 0)
		print_map_error();
	free(map);
}
