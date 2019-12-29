/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:16:33 by rthai             #+#    #+#             */
/*   Updated: 2019/09/12 19:48:09 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*temp;
	int		count;

	if (begin_list == 0)
		return (0);
	count = 1;
	temp = begin_list;
	while (temp->next != 0)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
