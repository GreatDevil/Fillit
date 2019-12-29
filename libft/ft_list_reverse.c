/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:40:30 by rthai             #+#    #+#             */
/*   Updated: 2019/09/08 16:44:04 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *next;
	t_list *prev;
	t_list *move;

	move = *begin_list;
	prev = 0;
	while (move != 0)
	{
		next = move->next;
		move->next = prev;
		prev = move;
		move = next;
	}
	*begin_list = prev;
}
