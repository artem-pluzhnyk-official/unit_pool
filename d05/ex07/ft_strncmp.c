/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 17:48:13 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/17 20:10:21 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 1;
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
		i++;
		if (i == n)
			break ;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
}
