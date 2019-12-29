/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:56:38 by rthai             #+#    #+#             */
/*   Updated: 2019/09/08 16:43:14 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*p;
	void	*temp_content;
	size_t	temp_size_content;

	p = *begin_list;
	if (*begin_list == 0)
		return ;
	while (p->next != 0)
	{
		temp_content = p->content;
		temp_size_content = p->content_size;
		if ((*cmp)(temp_content, p->next->content) > 0)
		{
			p->content = p->next->content;
			p->content_size = p->next->content_size;
			p->next->content = temp_content;
			p->next->content_size = temp_size_content;
			p = *begin_list;
			continue;
		}
		p = p->next;
	}
}
