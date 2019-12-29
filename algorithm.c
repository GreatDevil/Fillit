/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:53:57 by rthai             #+#    #+#             */
/*   Updated: 2019/09/28 19:31:25 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft.h"

int		algorithm_rec(t_tetrem *tet, t_map *map)
{
	tet->y = 0;
	if (tet->tetreminka == 0)
		return (1);
	while (tet->y <= map->size - tet->height)
	{
		tet->x = 0;
		while (tet->x <= map->size - tet->width)
		{
			if (CHECK_PUSH(tet->tetreminka >> tet->x,
			*(uint64_t*)(map->array + tet->y)))
			{
				*(uint64_t*)(map->array + tet->y) ^= tet->tetreminka >> tet->x;
				if (algorithm_rec(tet + 1, map))
					return (1);
				*(uint64_t*)(map->array + tet->y) ^= tet->tetreminka >> tet->x;
			}
			tet->x++;
		}
		tet->y++;
	}
	return (0);
}

void	algorithm(t_tetrem *tetrem, t_map *map)
{
	while (map->size < 16)
	{
		ft_bzero(map->array, sizeof(uint16_t) * 16);
		if (algorithm_rec(tetrem, map))
			return ;
		map->size++;
	}
}
