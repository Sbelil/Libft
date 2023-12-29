/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:17:13 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/06 15:35:17 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	count;
	size_t	dst_len;

	if (!dst && !n)
		return (ft_strlen(src));
	count = 0;
	dst_len = ft_strlen(dst);
	if (n <= ft_strlen(dst))
		return (ft_strlen(src) + n);
	while (src[count] && (dst_len + count) < n - 1)
	{
		dst[dst_len + count] = src[count];
		count++;
	}
	dst[dst_len + count] = '\0';
	return (dst_len + ft_strlen(src));
}
