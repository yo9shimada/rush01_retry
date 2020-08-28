/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 10:42:31 by yshimada          #+#    #+#             */
/*   Updated: 2020/08/28 13:39:03 by yshimada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_arg_error(void)
{
	write(1, "argument error!\n", 16);
}

int		*make_views(char *argv)
{
	int	*views;
	int	i;
	int	j;

	i = 0;
	j = 0;
	views = (int*)malloc(sizeof(int) * 16);
	while (1)
	{
		if ('1' <= argv[i] && argv[i] <= '4')
		{
			views[j] = argv[i] - '0';
			i++;
			j++;
		}
		else
			return (NULL);
		if (i == 31)
			return (views);
		if (argv[i] == ' ')
			i++;
		else
			return (NULL);
	}
}

int		*argv_check(char *argv)
{
	char	*tmp;
	int		len;
	int		*views;

	tmp = argv;
	len = 0;
	views = 0;
	while (tmp[len])
		len++;
	if (len != 31)
		return (views);
	views = make_views(argv);
	return (views);
}

int		main(int argc, char **argv)
{
	int *views;

	if (argc != 2 || !(views = argv_check(argv[1])))
	{
		print_arg_error();
		return (0);
	}
	solve(views);
}
