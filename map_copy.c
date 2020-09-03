/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 11:00:49 by yshimada          #+#    #+#             */
/*   Updated: 2020/09/03 11:03:36 by yshimada         ###   ########.fr       */
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
