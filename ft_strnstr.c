/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:02:10 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/11 02:21:41 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	count1;
	size_t	count2;
	char	*ret;

	if (!haystack && !n && needle)
		return (NULL);
	count1 = 0;
	count2 = 0;
	if (!needle[0])
		return ((char *) haystack);
	while (count1 <= n && haystack[count1])
	{
		count2 = 0;
		if (haystack[count1] == needle[count2])
			ret = (char *) haystack + count1;
		while (haystack[count1 + count2] == needle[count2] && \
										count1 + count2 < n && needle[count2])
			count2++;
		if (!needle[count2])
			return (ret);
		count1++;
	}
	return (NULL);
}
