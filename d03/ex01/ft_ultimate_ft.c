/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 19:07:37 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/13 19:59:01 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	int a;
	int *n1;
	int	*n2;
	int *n3;
	int *n4;
	int *n5;
	int *n6;
	int *n7;
	int *n8;

	a = 42;
	*n1 = &a;
	*n2 = &n1;
	*n3 = &n2;
	*n4 = &n3;
	*n5 = &n4;
	*n6 = &n5;
	*n7 = &n6;
	*n8 = &n7;
	nbr = &n8;
}
