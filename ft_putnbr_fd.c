/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:06:42 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/21 16:47:22 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	numb;
	char		num;

	numb = n;
	if (numb < 0)
	{
		write(fd, "-", 1);
		numb = numb * -1;
	}
	if (numb >= 10)
		ft_putnbr_fd(numb / 10, fd);
	num = numb % 10 + '0';
	write(fd, &num, 1);
}
