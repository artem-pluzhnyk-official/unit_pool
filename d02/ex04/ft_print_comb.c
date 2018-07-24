/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 15:59:00 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/12 19:21:01 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	char list[3];

	list[0] = 0;
	while (list[0] <= 7)
	{
		list[1] = list[0] + 1;
		while (list[1] <= 8)
		{
			list[2] = list[1] + 1;
			while (list[2] <= 9)
			{
				ft_putchar(list[0] + 48);
				ft_putchar(list[1] + 48);
				ft_putchar(list[2] + 48);
				if (list[0] != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				list[2]++;
			}
			list[1]++;
		}
		list[0]++;
	}
}
