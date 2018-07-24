/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 19:44:31 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/22 20:24:04 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		aval(int arr[][9], int row, int col, int num);

void	output(int arr[][9])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			c = (arr[i][j] + '0');
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n\0", 1);
		i++;
	}
}

int		entry(int arr[][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (arr[i][j] != 0)
			{
				if (!(aval(arr, i, j, arr[i][j])))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		fill(int arr[][9], char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i + 1][j] == 46)
				arr[i][j] = 0;
			else if ((argv[i + 1][j] > 57 || argv[i + 1][j] < 48))
				return (0);
			else
				arr[i][j] = (argv[i + 1][j] - 48);
			j++;
		}
		i++;
	}
	return (1);
}
