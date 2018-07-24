/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 17:24:28 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/19 23:39:23 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		l;
	int		i;
	char	*r;

	l = 0;
	while (str[l])
		l++;
	r = malloc(l);
	if (r == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		r[i] = str[i];
		i++;
	}
	return (r);
}
