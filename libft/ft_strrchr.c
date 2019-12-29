/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:08:14 by rthai             #+#    #+#             */
/*   Updated: 2019/09/05 20:08:14 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (*s != 0)
	{
		s++;
		count++;
	}
	while (*s != c && count > 0)
	{
		s--;
		count--;
	}
	if (*s == c)
		return ((char*)s);
	return (NULL);
}
