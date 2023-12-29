/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:50:33 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/11 02:32:47 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;
	size_t	end;
	size_t	count;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	end = 0;
	count = 0;
	if (start < s_len)
		end = s_len - start;
	if (end > len)
		end = len;
	res = (char *)malloc(sizeof(char) * (end + 1));
	if (!res)
		return (NULL);
	while (count < end)
	{
		res[count] = s[start + count];
		count++;
	}
	res[count] = '\0';
	return (res);
}
