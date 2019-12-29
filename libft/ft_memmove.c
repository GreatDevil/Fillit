/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:27:05 by rthai             #+#    #+#             */
/*   Updated: 2019/09/05 18:27:07 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst,
							const void *src, size_t len)
{
	unsigned char		*dst_char;
	unsigned char		*src_char;

	if (dst == NULL && src == NULL)
		return (NULL);
	src_char = (unsigned char*)src;
	dst_char = (unsigned char*)dst;
	if (dst_char < src_char)
		return (ft_memcpy(dst, src, len));
	while (len != 0)
	{
		dst_char[len - 1] = src_char[len - 1];
		len--;
	}
	return (dst);
}
