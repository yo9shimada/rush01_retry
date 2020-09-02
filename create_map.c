/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 09:56:00 by yshimada          #+#    #+#             */
/*   Updated: 2020/09/02 11:31:28 by yshimada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	map_copy(char (*map)[4], char (*temp_map)[4])
{
	int i;

	i = 0;
	while (i < 16)
	{
		temp_map[i / 4][i % 4] = map[i / 4][i % 4];
		i++;
	}
}

char	*create_map(char (*map)[4], int *views, int pos)
{
	char (*temp_map)[4];
	char el;

	temp_map = malloc(sizeof(char) * 4 * 4);
	map_copy(map, temp_map);
	el = '0';
	while (el < '4')
	{
		el++; 
		temp_map[pos / 4][pos % 4] = el;
//		if (same_num(temp_map, pos) && visible_num(temp_map, views, pos))
//		{
			pos++;
			if (pos == 16)
			{
				return (temp_map);
			}
			create_map(temp_map, views, pos);
//		}
	}
	free(temp_map);
	return (0);
}
