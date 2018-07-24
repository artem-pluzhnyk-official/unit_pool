/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 15:00:04 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/22 19:13:20 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**fill(int argc, char **argv, char **num)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			num[i][j] = argv[i][j];
			j++;
		}
		i++;
	}
	return (num);
}

char	**output(char **num)
{
	int i;
	int j;

	i = 0;
	while (num[i])
	{
		j = 0;
		while (num[i][j])
		{
			write(1, &num[i][j], 1);
			if (j < 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (num);
}

int		main(int argc, char **argv)
{
	char **num;

	num = (char **)malloc(1 * sizeof(char *));
	fill(argc, argv, num);
	output(fill(argc, argv, num));
	free(num);
	return (0);
}
