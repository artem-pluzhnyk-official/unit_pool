/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaltsev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 20:31:12 by omaltsev          #+#    #+#             */
/*   Updated: 2018/07/15 15:05:37 by omaltsev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	start(int x)
{
	int tm_x;

	tm_x = 1;
	ft_putchar(sym1);
	while (tm_x < x - 1)
	{
		ft_putchar(sym2);
		tm_x++;
	}
	if (x > 1)
		ft_putchar(sym3);
}

void	middle(int x, int y)
{
	int	tm_x;
	int	tm_y;

	tm_x = 1;
	tm_y = 1;
	while (tm_y < y)
	{
		while (tm_x <= x)
		{
			if (tm_x == 1 || tm_x == x)
				ft_putchar(sym2);
			else
				ft_putchar(' ');
			tm_x++;
		}
		tm_y++;
		ft_putchar('\n');
		tm_x = 1;
	}
}

void	last(int x)
{
	int tm_x;

	tm_x = 1;
	ft_putchar(sym1);
	while (tm_x < x - 1)
	{
		ft_putchar(sym2);
		tm_x++;
	}
	if (x > 1)
		ft_putchar(sym1);
}

void	rush04(int x, int y)
{
    char(sym1, stm2, sym3);
    sym1 = 'o';
    sym2 = '-';
    sym3 = '|';
	if (x == 1 && y == 1)
		ft_putchar(sym1);
	else
		start(x);
	ft_putchar('\n');
	middle(x, y - 1);
	if (y > 1)
		last(x);
}
