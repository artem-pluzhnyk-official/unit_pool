/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 23:37:25 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/19 23:37:36 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(int argc, char **argv)
{
	int		l;
	int		i;
	int		j;

	l = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++])
			l++;
		l++;
		i++;
	}
	return (l);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*r;
	int		l;
	int		i;
	int		j;

	if ((r = malloc(len(argc, argv))) == NULL)
		return (NULL);
	i = 1;
	l = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			r[l++] = argv[i][j++];
		if (i < argc - 1)
			r[l++] = '\n';
		i++;
	}
	r[l] = '\0';
	return (r);
}
