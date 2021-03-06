/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:11:23 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/12 19:41:41 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	b = -1;
	while (++a <= 99)
	{
		while (++b <= 99)
		{
			if (a < b)
			{
				ft_putchar(a / 10 + 48);
				ft_putchar(a % 10 + 48);
				ft_putchar(32);
				ft_putchar(b / 10 + 48);
				ft_putchar(b % 10 + 48);
				if (a != 98 || b != 98)
				{
					ft_putchar(44);
					ft_putchar(32);
				}
			}
		}
		b = -1;
	}
}
