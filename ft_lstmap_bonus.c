/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:40:55 by sbelil            #+#    #+#             */
/*   Updated: 2023/12/09 00:29:36 by sbelil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	first = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			new = ft_lstnew(NULL);
			if (!new)
			{
				ft_lstclear(&first, del);
				return (NULL);
			}
			new->content = f(lst->content);
			ft_lstadd_back(&first, new);
			lst = lst->next;
		}
	}
	return (first);
}
