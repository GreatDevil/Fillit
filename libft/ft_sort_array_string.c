/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_array_string.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:50:24 by rthai             #+#    #+#             */
/*   Updated: 2019/09/08 17:00:01 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_array_string(char **array_str, int (*cmp)())
{
	char	*str;
	int		i;

	i = 0;
	if (array_str == 0)
		return ;
	while (array_str[i + 1])
	{
		str = array_str[i];
		if ((*cmp)(str, array_str[i + 1]) > 0)
		{
			array_str[i] = array_str[i + 1];
			array_str[i + 1] = str;
			i = 0;
			continue;
		}
		i++;
	}
}
