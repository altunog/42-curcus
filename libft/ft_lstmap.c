/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:37:46 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/22 11:37:47 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node_mapped;
	t_list	*new_lst;

	if (!lst || (!f && !del))
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		node_mapped = ft_lstnew(f(lst->content));
		if (!node_mapped)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node_mapped);
		lst = lst->next;
	}
	return (new_lst);
}
