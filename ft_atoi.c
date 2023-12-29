/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:49:41 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/10 21:42:12 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	def_sign(char c)
{
	int	sign;

	sign = 1;
	if (c == '-')
		sign = -1;
	return (sign);
}

int	ft_atoi(const char *str)
{
	size_t		count;
	long long	res;
	int			sign;

	count = 0;
	res = 0;
	sign = 1;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == 32)
		count++;
	if (str[count] == '-' || str[count] == '+')
		sign = def_sign(str[count++]);
	while (str[count] >= 48 && str[count] <= 57)
	{
		if ((res * 10 + (str[count] - 48)) / 10 != res && sign == -1)
			return (0);
		if ((res * 10 + (str[count] - 48)) / 10 != res && sign == 1)
			return (-1);
		res = (res * 10) + (str[count] - 48);
		count++;
	}
	return ((int)(res * sign));
}
