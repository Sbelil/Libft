/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:07:13 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/06 14:18:38 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*my_s1;
	unsigned char	*my_s2;

	i = 0;
	my_s1 = (unsigned char *) s1;
	my_s2 = (unsigned char *) s2;
	if (!n)
		return (0);
	while (my_s1[i] == my_s2[i] && i < n - 1)
		i++;
	return (my_s1[i] - my_s2[i]);
}
