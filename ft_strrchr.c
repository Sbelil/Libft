/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:42:27 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/11 02:28:26 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*my_s;
	size_t	len;

	my_s = (char *) s;
	len = ft_strlen(s);
	if (my_s)
	{
		while (len)
		{
			if (s[len] == (char) c)
				return (my_s + len);
			len--;
		}
		if (s[len] == (char) c)
			return (my_s);
	}
	return (NULL);
}
