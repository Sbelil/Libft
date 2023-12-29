/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:15:56 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/11 02:02:42 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	count;

	count = 0;
	res = (char *)malloc((ft_strlen(s1) * sizeof(char)) + 1);
	if (!res)
		return (NULL);
	while (s1[count])
	{
		res[count] = s1[count];
		count++;
	}
	res[count] = '\0';
	return (res);
}
