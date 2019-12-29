/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 21:24:07 by rthai             #+#    #+#             */
/*   Updated: 2019/09/08 02:12:45 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	void		filling_str(long long int n, char **str)
{
	if (!(n / 10))
	{
		**str = '0' + n;
		(*str)++;
		return ;
	}
	filling_str(n / 10, str);
	**str = '0' + n % 10;
	(*str)++;
}

static	int			size_str(int n)
{
	if (!(n / 10))
		return (1);
	return (size_str(n / 10) + 1);
}

char				*ft_itoa(int n)
{
	int				size;
	long long int	new_n;
	char			*str;

	size = size_str(n);
	new_n = n;
	if (n < 0)
	{
		new_n = -new_n;
		size++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (n < 0)
	{
		*str = '-';
		str++;
	}
	filling_str(new_n, &str);
	*str = 0;
	return (str - size);
}
