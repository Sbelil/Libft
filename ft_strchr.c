/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:34:15 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/06 15:51:20 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*count;

	count = (char *) s;
	while (*count)
	{
		if (*count == (char) c)
			return (count);
		count++;
	}
	if (*count == (char) c)
		return (count);
	return (NULL);
}
