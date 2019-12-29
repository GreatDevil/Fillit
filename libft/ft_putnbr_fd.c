/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthai <rthai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:50:38 by rthai             #+#    #+#             */
/*   Updated: 2019/09/07 23:10:06 by rthai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long long int	new_n;
	char			c;

	new_n = n;
	if (n < 0)
	{
		new_n = new_n * -1;
		write(fd, "-", 1);
	}
	if (new_n < 10)
	{
		c = new_n + '0';
		write(fd, &c, 1);
		return ;
	}
	ft_putnbr_fd(new_n / 10, fd);
	c = new_n % 10 + '0';
	write(fd, &c, 1);
}
