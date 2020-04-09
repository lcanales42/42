/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:35:16 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/18 21:09:36 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*src1;
	char		*dst1;

	src1 = src;
	dst1 = dst;
	if (dst1 > src1)
	{
		i = n;
		while (i > 0)
		{
			dst1[i - 1] = src1[i - 1];
			i--;
		}
	}
	else if (dst1 < src1)
		ft_memcpy(dst1, src1, n);
	return (dst);
}
