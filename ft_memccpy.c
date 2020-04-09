/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:35:16 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/11 21:23:46 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		rt;
	char		*strdes;
	const char	*strori;
	void		*ptr;

	strdes = (char*)dst;
	strori = (const char*)src;
	ptr = 0;
	rt = 0;
	while (rt < n)
	{
		strdes[rt] = strori[rt];
		if (strdes[rt] == (char)c)
		{
			ptr = (void*)(strdes + rt + 1);
			return (ptr);
		}
		rt++;
	}
	return (ptr);
}
