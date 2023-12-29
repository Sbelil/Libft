/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:08:11 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/10 23:51:25 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*my_dst;
	unsigned char	*my_src;

	if (dst <= src)
		return (ft_memcpy(dst, src, n));
	my_dst = (unsigned char *) dst;
	my_src = (unsigned char *) src;
	if (my_dst > my_src)
	{
		while (n--)
			my_dst[n] = my_src[n];
		return (dst);
	}
	return (NULL);
}
