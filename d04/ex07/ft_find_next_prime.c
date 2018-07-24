/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 15:23:49 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/14 19:33:18 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int temp;

	temp = 2;
	if (temp < 2)
	{
		return (0);
	}
	while (temp != nb / 2)
	{
		if (nb % temp == 0)
		{
			nb++;
			temp = 2;
		}
		else
		{
			temp++;
		}
	}
	return (nb);
}
