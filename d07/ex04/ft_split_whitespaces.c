/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 23:38:08 by apluzhni          #+#    #+#             */
/*   Updated: 2018/07/19 23:38:11 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

void	cpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int		count_words(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (space(str[i]))
			i++;
		if (!str[i])
			break ;
		words++;
		while (str[i] && !space(str[i]))
			i++;
	}
	return (words);
}

int		cut_words(char *str, int words, char **r)
{
	int w;
	int start;
	int end;

	w = 0;
	start = 0;
	while (w < words && str[start])
	{
		while (space(str[start]))
			start++;
		end = start;
		while (str[end] && !space(str[end]))
			end++;
		if (!(r[w] = malloc(end - start + 1)))
			return (0);
		cpy(r[w], str + start, end - start);
		start = end + 1;
		w++;
	}
	return (1);
}

char	**ft_split_whitespaces(char *str)
{
	int		words;
	char	**r;

	words = count_words(str);
	if (!words)
	{
		if (!(r = malloc(sizeof(*r))))
			return (NULL);
		r[0] = NULL;
		return (r);
	}
	if (!(r = malloc((words + 1) * sizeof(*r))))
		return (NULL);
	if (!cut_words(str, words, r))
		return (NULL);
	r[words] = 0;
	return (r);
}
