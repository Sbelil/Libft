/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:42:57 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/06 16:05:03 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*my_s;

	my_s = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		if (my_s[count] == (unsigned char) c)
			return (my_s + count);
		count++;
	}
	return (NULL);
}
