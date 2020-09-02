/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 11:26:43 by yshimada          #+#    #+#             */
/*   Updated: 2020/09/02 11:28:25 by yshimada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H

# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

void	solve(int *views);
char	**create_map(char (*map)[4], int *views, int pos);

#endif
