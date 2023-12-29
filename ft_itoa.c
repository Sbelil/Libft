/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:46:39 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/11 01:47:58 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_abs(int n)
{
	if (n < 0 && n != -2147483648)
		n *= -1;
	return (n);
}

static	size_t	ft_power_ten(int power)
{
	size_t	res;

	res = 1;
	while (power--)
		res *= 10;
	return (res);
}

static	int	ft_len_num(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	pwr;
	int		m;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = 0;
	m = ft_abs(n);
	pwr = ft_power_ten(ft_len_num(n));
	res = (char *) malloc (sizeof(char) * (ft_len_num(n) + 1));
	if (!res)
		return (NULL);
	while (pwr >= 10)
	{
		if (n < 0)
			res[0] = '-';
		pwr /= 10;
		res[i++] = (m / pwr) + 48;
		m %= pwr;
	}
	res[i] = '\0';
	return (res);
}
