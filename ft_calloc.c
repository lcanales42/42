/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:49:27 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/11 21:22:37 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	rt;
	char	*str;

	rt = 0;
	if (!(str = malloc(count * size)))
		return (0);
	while (rt < (count * size))
	{
		str[rt] = 0;
		rt++;
	}
	return (str);
}
