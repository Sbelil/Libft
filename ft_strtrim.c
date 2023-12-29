/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:11:54 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/11 02:30:30 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (!s1[start])
		return (ft_strdup(""));
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	res = ft_substr(s1, start, end - start + 1);
	if (!res)
		return (NULL);
	return (res);
}
