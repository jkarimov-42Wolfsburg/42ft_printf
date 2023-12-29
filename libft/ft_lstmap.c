/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:23:36 by jkarimov          #+#    #+#             */
/*   Updated: 2023/12/24 15:33:37 by jkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	ret = NULL;
	tmp = NULL;
	while (lst)
	{
		tmp = malloc(sizeof(t_list));
		if (!tmp)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		tmp->content = f(lst->content);
		tmp->next = NULL;
		ft_lstadd_back(&ret, tmp);
		lst = lst->next;
	}
	return (ret);
}
