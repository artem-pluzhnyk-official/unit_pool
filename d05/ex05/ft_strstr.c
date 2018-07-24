/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:42:20 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/17 20:09:52 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int ti;

	i = 0;
	ti = 0;
	while (str[i] != '\0')
	{
		ti = 0;
		while (to_find[ti] != '\0')
		{
			if (str[i + ti] == to_find[ti])
				ti++;
			else
				break ;
			if (to_find[ti] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
