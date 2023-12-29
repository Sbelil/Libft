/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:11:15 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/11 01:46:20 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	check;

	if (!s)
		return (0);
	count = 1;
	check = 0;
	while (*s)
	{
		if (*s != c)
			check = 1;
		else if (*s == c && check == 1)
		{
			check = 0;
			count++;
		}
		s++;
	}
	if (check == 1)
		count++;
	return (count);
}

static	size_t	ft_len_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
			count++;
		else
			return (count + 1);
		s++;
	}
	return (count + 1);
}

static	char	**my_free(char **tab)
{
	size_t	count;

	count = 0;
	while (tab[count])
		free(tab[count++]);
	free(tab);
	return (NULL);
}

static	char	**ft_my_split(char const *s, char c)
{
	char	**res;
	size_t	count_w;
	size_t	count_len;

	count_w = 0;
	res = (char **) malloc(sizeof(char *) * ft_count_words(s, c));
	if (!res)
		return (NULL);
	while (s && *s)
	{
		if (*s != c && *s)
		{
			res[count_w] = (char *) malloc(sizeof(char) * ft_len_words(s, c));
			if (!res[count_w])
				return (my_free(res));
			count_len = 0;
			while (*s != c && *s)
				res[count_w][count_len++] = *s++;
			res[count_w++][count_len] = '\0';
			s--;
		}
		s++;
	}
	return (res[count_w] = NULL, res);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_my_split(s, c));
}
