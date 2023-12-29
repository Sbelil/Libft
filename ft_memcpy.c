/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:17:40 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/10 23:49:06 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*my_dest;
	unsigned char		*my_src;
	size_t				i;

	if (dest == src)
		return (dest);
	my_dest = (unsigned char *) dest;
	my_src = (unsigned char *) src;
	i = 0;
	while (i++ < n)
		*my_dest++ = *my_src++;
	return (dest);
}
