/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 11:26:43 by yshimada          #+#    #+#             */
/*   Updated: 2020/09/10 10:34:22 by yshimada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

void	solve(int *views);
int		create_map(char (*map)[4], int *views, int pos, int *solve_flag);
void	map_copy(char (*map)[4], char (*temp_map)[4]);
void	show(char (*map)[4]);

#endif
