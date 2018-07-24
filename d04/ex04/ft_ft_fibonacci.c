/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_fibonacci.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 10:40:29 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/14 19:18:38 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int nb)
{
	if (nb < 3)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
	}
}