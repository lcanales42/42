/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 18:30:18 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/24 11:51:24 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned int	rt;
	unsigned int	rt1;
	char			*str;

	if (s1 == 0 || s2 == 0)
		return (0);
	if (!(str = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char))))
		return (0);
	rt = 0;
	rt1 = 0;
	while (s1[rt] != 0)
	{
		str[rt] = s1[rt];
		rt++;
	}
	while (s2[rt1] != 0)
	{
		str[rt] = s2[rt1];
		rt++;
		rt1++;
	}
	str[rt] = '\0';
	return (str);
}
