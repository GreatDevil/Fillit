/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 00:07:57 by rthai             #+#    #+#             */
/*   Updated: 2019/09/08 19:03:28 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list *next;

	if (alst == NULL)
		return ;
	(*del)((*alst)->content, (*alst)->content_size);
	next = (*alst)->next;
	*alst = NULL;
	free(*alst);
}
