/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:20:02 by rthai             #+#    #+#             */
/*   Updated: 2019/09/07 22:45:44 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_new;
	int		i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str_new = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str_new == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		str_new[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		str_new[i] = *s2;
		s2++;
		i++;
	}
	str_new[i] = 0;
	return (str_new);
}
