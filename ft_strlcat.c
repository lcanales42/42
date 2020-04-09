/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:13:20 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/18 21:05:17 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t rt;
	size_t tdst;
	size_t tsrc;

	rt = 0;
	tdst = ft_strlen(dst);
	tsrc = ft_strlen(src);
	if (destsize == 0)
		return (destsize + tsrc);
	if (destsize - 1 < tdst)
		return (tsrc + destsize);
	while (tdst + rt < destsize - 1 && src[rt] != 0)
	{
		dst[tdst + rt] = src[rt];
		rt++;
	}
	dst[tdst + rt] = 0;
	return (tdst + tsrc);
}
