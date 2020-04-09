/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:31:06 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/21 16:34:40 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	a;

	str = (unsigned char*)s;
	a = (unsigned char)c;
	while (n != 0)
	{
		if (*str == a)
			return (str);
		str++;
		n--;
	}
	return (0);
}
