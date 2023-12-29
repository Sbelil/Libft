/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:42:06 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/10 23:55:35 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_abs(int n)
{
	if (n < 0 && n != -2147483648)
		n *= -1;
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	m;
	int	i;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	m = ft_abs(n);
	i = 1;
	if (n != -2147483648)
	{
		if (n < 0)
			ft_putchar_fd('-', fd);
		while (m >= 10)
		{
			m /= 10;
			i *= 10;
		}
		m = ft_abs(n);
		while (i)
		{
			ft_putchar_fd ((m / i) + 48, fd);
			m %= i;
			i /= 10;
		}
	}
}
