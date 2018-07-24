/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 19:44:38 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/22 20:26:34 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(int arr[][9], int row, int col, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (i != row)
			if (arr[i][col] == num)
				return (0);
		if (i != col)
			if (arr[row][i] == num)
				return (0);
		i++;
	}
	return (1);
}

int		grid(int arr[][9], int row, int col, int num)
{
	int c;
	int r;
	int row_start;
	int col_start;

	row_start = (row / 3) * 3;
	col_start = (col / 3) * 3;
	r = 0;
	while (r < 3)
	{
		c = 0;
		while (c < 3)
		{
			if ((row_start + r) != row && c != (col_start + c))
				if (arr[row_start + r][col_start + c] == num)
					return (0);
			c++;
		}
		r++;
	}
	return (1);
}

int		aval(int arr[][9], int row, int col, int num)
{
	if (!(check(arr, row, col, num)))
		return (0);
	if (!(grid(arr, row, col, num)))
		return (0);
	return (1);
}
