/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:09:32 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/06 10:55:58 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char	*my_s;

	count = 0;
	my_s = (char *) s;
	if (n != 0)
	{
		while (count < n)
			my_s[count++] = 0;
	}
}
