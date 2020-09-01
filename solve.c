/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 13:41:21 by yshimada          #+#    #+#             */
/*   Updated: 2020/09/01 15:21:49 by yshimada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	init(char map[4][4])
{
	int i;

	i = 0;
	while (i < 16)
	{
		map[i / 4][i % 4] = '0';
		i++;
	}
}

void	show(char map[4][4])
{
	int i;

	i = 0;
	while (i < 16)
	{
		ft_putchar(map[i / 4][i % 4]);
		i++;
		if (i % 4 == 0)
			ft_putchar('\n');
	}
}

void	solve(int *views)
{
	char map[4][4];

	*views = 0;
	init(map);
	show(map);
}
