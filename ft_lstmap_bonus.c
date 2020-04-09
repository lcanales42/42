/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcanales <lcanales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 12:53:45 by lcanales          #+#    #+#             */
/*   Updated: 2019/11/21 18:08:38 by lcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list **new_list;
	t_list *first;

	(void)(del);
	new_list = malloc(8);
	*new_list = 0;
	while (lst != 0)
	{
		first = ft_lstnew((f)(lst->content));
		ft_lstadd_back(new_list, first);
		lst = lst->next;
	}
	return (*new_list);
}
