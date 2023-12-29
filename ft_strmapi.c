/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:47:37 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/11 02:01:45 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	count;
	char			*res;

	count = -1;
	if (!s || !f)
		return (NULL);
	len = ft_strlen (s);
	res = (char *) malloc (sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (s[++count])
		res[count] = f(count, s[count]);
	res[count] = '\0';
	return (res);
}
