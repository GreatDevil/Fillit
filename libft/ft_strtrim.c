/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:41:38 by rthai             #+#    #+#             */
/*   Updated: 2019/09/08 02:15:41 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t		my_lenstr(char const *str)
{
	int		count;
	char	*ptr_start;

	ptr_start = (char*)str;
	count = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
	{
		str++;
		count++;
	}
	if (*str == 0)
		return (count);
	while (*str)
		str++;
	str--;
	while (ptr_start <= str && (*str == ' ' || *str == '\n' || *str == '\t'))
	{
		str--;
		count++;
	}
	return (count);
}

char				*ft_strtrim(char const *s)
{
	char	*str;
	size_t	size;
	size_t	i;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s) - my_lenstr(s);
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	while (*s && (*s == ' ' || *s == '\n' || *s == '\t'))
		s++;
	i = 0;
	while (i < size)
	{
		str[i] = *s;
		s++;
		i++;
	}
	str[i] = 0;
	return (str);
}
