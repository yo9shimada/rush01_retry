/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 09:56:00 by yshimada          #+#    #+#             */
/*   Updated: 2020/09/07 16:33:53 by yshimada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		same_num(char (*map)[4], int pos, int el)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (map[pos / 4][i] == el)
			return (0);
		if (map[i][pos % 4] == el)
			return (0);
		i++;
	}
	return (1);
}

int		y_visible_num(char (*map)[4], int pos, int dir)
{
	int		i;
	int		cnt;
	char	box_height;

	i = (dir == 1 ? 0 : 3);
	cnt = 0;
	box_height = '0';
	while (0 <= i && i <= 3)
	{
		if (box_height < map[i][pos % 4])
		{
			box_height = map[i][pos % 4];
			cnt++;
		}
		i += dir;
	}
	return (cnt);
}

int		x_visible_num(char (*map)[4], int pos, int dir)
{
	int		i;
	int		cnt;
	char	box_height;

	i = (dir == 1 ? 0 : 3);
	cnt = 0;
	box_height = '0';
	while (0 <= i && i <= 3)
	{
		if (box_height < map[pos / 4][i])
		{
			box_height = map[pos / 4][i];
			cnt++;
		}
		i += dir;
	}
	return (cnt);
}

int		view_cmp(char (*map)[4], int *views, int pos)
{
	if (pos / 4 == 3 && views[pos % 4] != y_visible_num(map, pos, 1)
			&& views[pos % 4 + 4] != y_visible_num(map, pos, -1))
		return (0);
	if (pos % 4 == 3 && views[pos / 4 + 8] != x_visible_num(map, pos, 1)
			&& views[pos / 4 + 12] != x_visible_num(map, pos, -1))
		return (0);
	return (1);
}

int		create_map(char (*map)[4], int *views, int pos, char el)
{
	char (*temp_map)[4];
	int i;

	i = 0;
	temp_map = malloc(sizeof(char) * 4 * 4);
	map_copy(map, temp_map);
	while (i++ < 4)
	{
		if (same_num(temp_map, pos, el) && view_cmp(temp_map, views, pos))
		{
			temp_map[pos / 4][pos % 4] = el;
			pos++;
			if (pos == 16)
			{
				//show(temp_map);
				break;
			}
			create_map(temp_map, views, pos, el);
		}
		else
			el = el % 4 + '1';
		/**/show(temp_map);
		/**/write(1, "\n", 1); 
	}
	free(temp_map);
	return (0);
}
