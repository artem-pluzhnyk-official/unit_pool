/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 16:23:09 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/17 16:05:55 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int xt;
	int yt;

	xt = 1;
	yt = 1;
	while (yt <= y)
	{
		while (xt <= x)
		{
			if ((xt == 1 && yt == 1) || (xt == x && yt == y && y != 1 && x != 1))
			{
				ft_putchar('/');
			}
			if ((xt == x && yt == 1 && x != 1) || (xt == 1 && yt == y && y != 1))
			{
				ft_putchar('\\');
			}
			if ((xt != 1 && xt != x && (yt == 1 || yt == y)))
			{
				ft_putchar('*');
			}
			if ((yt != 1 && yt != y && (xt == 1 || xt == x)))
			{
				ft_putchar('*');
			}
			if ((xt > 1 && xt < x) && (yt > 1 && yt < y))
			{
				ft_putchar(' ');
			}
			xt++;
		}
		ft_putchar('\n');
		xt = 1;
		yt++;
	}
}
