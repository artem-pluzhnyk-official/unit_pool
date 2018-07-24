/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 07:44:05 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/20 07:50:02 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int	j;
	int	x;
	int	len;

	j = 0;
	while (j < length)
	{
		j = 0;
		x = 0;
		len = 0;
		while (tab[0][j] && j < length)
		{
			j += 1;
			len += 1;
		}
		while (tab[0][j] == 0 && j++ < length)
			x += 1;
		if (j < length)
		{
			tab[0][j - x] = tab[0][j];
			tab[0][j] = 0;
		}
	}
	return (len);
}
