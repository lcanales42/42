/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:42:45 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/25 19:14:16 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		wrdcnt(char const *s, char c)
{
	int number_words;
	int i;

	number_words = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			number_words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (number_words + 1);
}

static int		get_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void		var_init(int *i, int *j, int *k, int *word)
{
	*i = -1;
	*j = 0;
	*k = 0;
	*word = 0;
}

char			**ft_split(char const *s, char c)
{
	char	**p;
	int		d[4];

	var_init(&d[0], &d[1], &d[2], &d[3]);
	if (s == 0 || !(p = (char **)malloc(sizeof(char *) * wrdcnt(s, c))))
		return (0);
	while (s[++d[0]] != '\0')
		if (s[d[0]] != c && d[3] == 0)
		{
			d[3] = 1;
			p[d[1]] = ft_substr(s, d[2], get_len((char *)&s[d[0]], c));
			d[2] = ft_strlen(p[d[1]]) + d[2] + 1;
			d[1]++;
		}
		else if (s[d[0]] == c)
		{
			d[3] = 0;
			while (s[d[0] + 1] == c)
				d[0]++;
			d[2] = d[0] + 1;
		}
	p[d[1]] = 0;
	return (p);
}
