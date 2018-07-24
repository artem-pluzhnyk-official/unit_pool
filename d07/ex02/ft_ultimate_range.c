/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 23:36:48 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/19 23:37:01 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *r;
	int i;

	if (min >= max)
		return (NULL);
	r = malloc((max - min) * sizeof(*r));
	if (r == NULL)
		return (NULL);
	i = 0;
	while (i < max)
	{
		r[i] = min + i;
		i++;
	}
	return (r);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
