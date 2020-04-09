/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:07:34 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/18 20:55:04 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	ft_init(size_t *a, size_t *b, char **h, char *ret)
{
	*a = -1;
	*b = 0;
	*h = ret;
}

char		*ft_strnstr(const char *hay, const char *need, size_t len)
{
	char	*ret;
	char	*h;
	char	*n;
	size_t	aux;
	size_t	aux2;

	ret = (char*)hay;
	n = (char*)need;
	ft_init(&aux, &aux2, &h, ret);
	while (h[++aux] && n[aux2] && aux < len)
	{
		if (h[aux] != n[aux2])
		{
			aux2 = 0;
			ret = 0;
		}
		if (h[aux] == n[aux2])
		{
			ret = ret != 0 ? ret : h + aux;
			aux2++;
			if (n[aux2] == 0)
				return (ret);
		}
	}
	return (need[aux2] == 0 ? ret : 0);
}
