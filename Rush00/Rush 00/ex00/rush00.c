/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshevchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 12:12:34 by oshevchu          #+#    #+#             */
/*   Updated: 2018/07/14 13:12:42 by apolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int j, int x, char c1, char c2)
{
	if (j == 0 || j == (x - 1))
		ft_putchar(c1);
	else
		ft_putchar(c2);
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (i == 0 || i == (y - 1))
				print(j, x, 'o', '-');
			if (i != 0 && i != (y - 1))
				print(j, x, '|', ' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
