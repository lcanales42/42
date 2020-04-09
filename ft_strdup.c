/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:07:14 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/14 18:14:32 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	rt;
	char			*str;

	rt = ft_strlen(s1);
	if (!(str = malloc(sizeof(char) * rt + 1)))
		return (0);
	rt = 0;
	while (s1[rt] != 0)
	{
		str[rt] = s1[rt];
		rt++;
	}
	str[rt] = 0;
	return (str);
}
