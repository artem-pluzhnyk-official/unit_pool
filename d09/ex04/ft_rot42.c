/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot47.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 21:59:52 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/19 22:31:27 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	cryptobig(char c);
char	cryptosmall(char c);

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{	
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = cryptosmall(str[i]);
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = cryptobig(str[i]);
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	cryptosmall(char c)
{
	int i;
	int l;

	i = 0;
	l = 'z' - c;
	if ('a' + (42 - (l + 1)) > 'z')
	{
		c = 'a' + (42 - (l + 1) - 26);
		i++;
	}
	else
	{
		c = 'a' + (42 - (l + 1));
		i++;
	}
	return (c);
}

char	cryptobig(char c)
{
	int i;
	int l;

	i = 0;
	l = 'Z' - c;
	if ('A' + (42 - (l + 1)) > 'Z')
	{
		c = 'A' + (42 - (l + 1) - 26);
		i++;
	}
	else
	{
		c = 'A' + (42 - (l + 1));
		i++;
	}
	return (c);
}