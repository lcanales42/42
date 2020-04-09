/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:31:06 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/13 21:29:50 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	rt;

	rt = 0;
	while (str[rt] != 0)
	{
		if (str[rt] == c)
			return ((char*)str + rt);
		rt++;
	}
	if (str[rt] == 0 && c == 0)
		return ((char*)str + rt);
	return (0);
}
