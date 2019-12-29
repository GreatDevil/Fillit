/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:10:30 by rthai             #+#    #+#             */
/*   Updated: 2019/09/07 18:19:10 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	int		i;

	if (s == NULL)
		return (NULL);
	new_str = (char*)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	s += start;
	i = 0;
	while (*s && len > 0)
	{
		new_str[i] = *s;
		s++;
		i++;
		len--;
	}
	new_str[i] = 0;
	return (new_str);
}
