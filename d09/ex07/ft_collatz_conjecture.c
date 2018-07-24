/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 00:17:58 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/20 01:10:27 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		if (base % 2 == 0)
			return (ft_collatz_conjecture(base / 2) + 1);
		else
			return (ft_collatz_conjecture((base * 3) + 1) + 1);
	}
	return (0);
}
