/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:06:05 by rthai             #+#    #+#             */
/*   Updated: 2019/09/12 19:47:55 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_str;
	int		size;

	if (!s1)
		return (0);
	size = ft_strlen(s1);
	new_str = (char*)malloc(size + 1);
	if (new_str == 0)
		return (0);
	while (size >= 0)
	{
		new_str[size] = s1[size];
		size--;
	}
	return (new_str);
}
