/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 19:33:32 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/13 20:02:39 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int diff;
	int mmod;

	diff = (a) / (b);
	mod = (a) % (b);
	div = &diff;
	mod = &mmod;
}
