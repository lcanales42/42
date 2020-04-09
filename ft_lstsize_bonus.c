/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 12:53:45 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/21 09:51:15 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cont;
	t_list	*ptr;

	ptr = lst;
	cont = 0;
	while (ptr != 0)
	{
		ptr = ptr->next;
		cont++;
	}
	return (cont);
}
