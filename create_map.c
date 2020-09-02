/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 09:56:00 by yshimada          #+#    #+#             */
/*   Updated: 2020/09/02 15:27:17 by yshimada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		same_num(char (*map)[4], int pos, int el)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (map[pos / 4][i] == el && i != pos % 4)
			return (0);
		i++;
	}
	return (1);
}

int		y_visible_num(views, pos, 1)

int		view_cmp(char (*map)[4], int *views, int pos)
{
	if (pos / 4 == 3 && views[pos % 4] == y_visible_num(map, pos, 1)
			&& views[pos % 4 + 4] == y_visible_num(map, pos, -1))
		return (0);
	if (pos % 4 == 3 && views[pos / 4 + 8] == x_visible_num(map, pos, 1)
            && views[pos / 4 + 12] == x_visible_num(map, pos, -1))
		return (0);
	return (1);
}

int		create_map(char (*map)[4], int *views, int pos)
{
	char el;

	el = '0';
	while (el < '4')
	{
		el++; 
		map[pos / 4][pos % 4] = el;
		if (same_num(map, pos, el) && view_cmp(map, views, pos))
		{
			pos++;
			if (pos == 16)
				return (1);
			create_map(map, views, pos);
		}
	}
	return (0);
}
