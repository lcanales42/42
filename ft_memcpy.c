/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:35:16 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/15 17:43:00 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			rt;
	unsigned char	*strdes;
	const char		*strori;

	strdes = (unsigned char*)dst;
	strori = (const char*)src;
	rt = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (rt < n)
	{
		strdes[rt] = strori[rt];
		rt++;
	}
	return (dst);
}
