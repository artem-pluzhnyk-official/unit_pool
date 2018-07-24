/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 19:44:22 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/22 20:17:38 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		check(int arr[][9], int row, int col, int num);
int		grid(int arr[][9], int row, int col, int num);
int		aval(int arr[][9], int row, int col, int num);
void	output(int arr[][9]);
int		entry(int arr[][9]);
int		fill(int arr[][9], char **argv);

int		empty(int arr[][9], int *row, int *col)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (arr[i][j] == 0)
			{
				*row = i;
				*col = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		rezult(int arr[][9])
{
	int row;
	int col;
	int var;

	row = 0;
	col = 0;
	if (empty(arr, &row, &col) == 0)
		return (1);
	var = 1;
	while (var <= 9)
	{
		if (aval(arr, row, col, var))
		{
			arr[row][col] = var;
			if (rezult(arr) == 1)
				return (1);
			arr[row][col] = 0;
		}
		var++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int arr[9][9];

	(void)argc;
	fill(arr, argv);
	if (entry(arr))
	{
		rezult(arr);
		output(arr);
	}
	return (0);
}
