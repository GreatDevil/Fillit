/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 20:36:09 by rthai             #+#    #+#             */
/*   Updated: 2019/09/08 18:55:51 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static size_t	len(const char *str, char c)
{
	int count;

	count = 0;
	while (str[count] && str[count] != c)
		count++;
	return (count);
}

static size_t	word_count(const char *str, char c)
{
	size_t count;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			while (*str != c && *str)
				str++;
			count++;
		}
		if (!*str)
			break ;
		str++;
	}
	return (count);
}

static char		*filling_word(const char **s, char c)
{
	char	*new_word;
	int		j;

	if (!(new_word = (char*)malloc(sizeof(char) * (len(*s, c) + 1))))
		return (NULL);
	j = 0;
	while (**s && **s != c)
	{
		new_word[j] = **s;
		(*s)++;
		j++;
	}
	new_word[j] = 0;
	return (new_word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**array_str;
	int		i;

	if (!s)
		return (NULL);
	if (!(array_str = (char**)malloc(sizeof(char*) * (word_count(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!(array_str[i] = filling_word(&s, c)))
				return (NULL);
			i++;
		}
		if (*s == 0)
			break ;
		s++;
	}
	array_str[i] = NULL;
	return (array_str);
}
