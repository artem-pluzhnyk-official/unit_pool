/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 15:31:31 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/14 19:13:07 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int mult;

	mult = 1;
	if (nb > 0)
	{
		while (nb != 0)
		{
			mult = mult * nb;
			nb--;
		}
		return (mult);
	}
	else
	{
		if (nb == 0)
		{
			return (1);
		}
		if (nb < 0)
		{
			return (0);
		}
	}
}
