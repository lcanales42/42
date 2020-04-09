/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:31:06 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/13 21:40:22 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int		rt;

	ptr = 0;
	rt = 0;
	while (str[rt] != 0)
	{
		if (str[rt] == c)
			ptr = (char*)(str + rt);
		rt++;
	}
	if (str[rt] == 0 && c == 0)
		return ((char*)str + rt);
	return (ptr);
}
