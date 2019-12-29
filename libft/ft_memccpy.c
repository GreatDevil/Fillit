/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:00:15 by rthai             #+#    #+#             */
/*   Updated: 2019/09/08 02:13:33 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst,
					const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dst_char;
	unsigned char		*src_char;

	dst_char = (unsigned char*)dst;
	src_char = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dst_char[i] = src_char[i];
		if (src_char[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
