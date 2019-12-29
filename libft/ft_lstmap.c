/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 00:40:12 by rthai             #+#    #+#             */
/*   Updated: 2019/09/08 16:55:19 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*clean(t_list **lst)
{
	t_list *next;

	while (*lst)
	{
		next = (*lst)->next;
		free(*lst);
		*lst = next;
	}
	return (NULL);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *start;

	if (!lst || !f)
		return (NULL);
	if (!(new_lst = (*f)(lst)))
		return (NULL);
	start = new_lst;
	if (!(lst->next))
		return (new_lst);
	lst = lst->next;
	while (lst)
	{
		if (!(new_lst->next = (*f)(lst)))
			return (clean(&start));
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (start);
}
