/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:57:23 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/15 17:45:37 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	unsigned int rt;
	unsigned int rt1;

	rt = 0;
	rt1 = 0;
	if (dst == 0 || src == 0)
		return (0);
	if (destsize > 0)
	{
		while (rt != destsize && src[rt] != '\0')
		{
			dst[rt] = src[rt];
			rt++;
		}
		if (rt < destsize)
			dst[rt] = '\0';
		else
			dst[rt - 1] = '\0';
	}
	while (src[rt1] != '\0')
		rt1++;
	return (rt1);
}
