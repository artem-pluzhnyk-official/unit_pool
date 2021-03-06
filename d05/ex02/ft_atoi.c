/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 18:42:28 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/17 20:03:40 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int zn;
	int num;

	num = 0;
	zn = 1;
	while (*str == ' ')
		str++;
	while ('-' == *str || '+' == *str)
	{
		if (*str == '-')
			zn = -zn;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (zn * num);
}
