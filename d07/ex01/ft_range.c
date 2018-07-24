/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:37:22 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/19 17:44:04 by apluzhni         ###   ########.fr       */
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
