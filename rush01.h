/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 11:26:43 by yshimada          #+#    #+#             */
/*   Updated: 2020/09/03 13:27:15 by yshimada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H

# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	solve(int *views);
int		create_map(char (*map)[4], int *views, int pos, char el);
void	map_copy(char (*map)[4], char (*temp_map)[4]);
void	show(char (*map)[4]);

#endif
