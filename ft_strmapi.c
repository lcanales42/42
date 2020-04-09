/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 14:51:14 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/24 11:42:54 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	rt;
	char			*str;

	if (s == 0)
		return (0);
	if (!(str = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (0);
	rt = 0;
	while (s[rt] != 0)
	{
		str[rt] = (*f)(rt, s[rt]);
		rt++;
	}
	str[rt] = '\0';
	return (str);
}
