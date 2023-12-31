/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:18:00 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/06 10:27:47 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c <= 57 && c >= 48) || (c <= 122 && c >= 97) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
