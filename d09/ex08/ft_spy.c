/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 02:36:50 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/20 03:03:01 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alert(void)
{
	write(1, "Alert !!!\n", 10);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	find(char *str)
{
	if (ft_strcmp(str, "president") == 0)
		alert();
	if (ft_strcmp(str, "attentat") == 0)
		alert();
	if (ft_strcmp(str, "bauer") == 0)
		alert();
}

void	min(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
}

int		main(int argc, char **argv)
{
	char tmp[1000];
	int i;
	int j;
	int k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				tmp[k] = argv[i][j];
				k++;
			}
			j++;
		}
		tmp[j] = '\0';
		min(tmp);
		find(tmp);
		i++;
	}
	return (0);
}
