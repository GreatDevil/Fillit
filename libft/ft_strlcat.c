/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 19:34:52 by rthai             #+#    #+#             */
/*   Updated: 2019/09/08 17:13:22 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t		length(const char *str)
{
	size_t size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

size_t				ft_strlcat(char *dst,
					const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t length_dest;

	if (size == 0)
		return (length(src));
	length_dest = length(dst);
	i = length_dest;
	j = 0;
	while (size - 1 > i && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (length(src) + length_dest > size + length(src))
		return (size + length(src));
	else
		return (length_dest + length(src));
}
