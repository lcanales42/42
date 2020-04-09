/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:22:15 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/11 20:29:18 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	rt;
	char	*str;

	str = (char*)b;
	rt = 0;
	while (rt < len)
	{
		str[rt] = (char)c;
		rt++;
	}
	return (str);
}
