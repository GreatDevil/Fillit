/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:47:34 by rthai             #+#    #+#             */
/*   Updated: 2019/09/07 16:55:07 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *destination,
				const void *source, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*sourc;

	dest = (unsigned char*)destination;
	sourc = (const unsigned char*)source;
	if (destination == 0 && source == 0 && n > 0)
		return (destination);
	i = 0;
	while (i < n)
	{
		dest[i] = sourc[i];
		i++;
	}
	return (destination);
}
